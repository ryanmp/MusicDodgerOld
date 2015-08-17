// libs
var _ = require('underscore');
var fs = require('fs');
var midiConverter = require('midi-converter');

var file_name = 'demo1';
var in_file_loc = '../Assets/Resources/Music/MIDI/' + file_name + '.mid';
var out_file_loc = '../Assets/Resources/Music/Levels/' + file_name + '.json';
var tempo = 140; // can't read this from midifile... rats

// input is a midi file... output is a js file containing one object with:
// time of each note (start_time), normalized & absolute velocities and pitch (pitch denoted by note number)
// usage: node main.js input_file_loc output_file_loc tempo
if (process.argv.length > 2){
	in_file_loc = process.argv[2];
	out_file_loc = process.argv[3];
	tempo = process.argv[4];
}

var midiSong = fs.readFileSync(in_file_loc, 'binary');
var jsonSong = midiConverter.midiToJson(midiSong);

//fs.writeFileSync('./raw.json', JSON.stringify(jsonSong)); //save a copy
//var o = require('./raw.json');

var o = jsonSong;
var song = [];

console.log("---song overview---");
console.log("name: " + file_name +"\ntempo: " + tempo);
console.log("(min_note, max_note, min_v, max_v)");

for (var t = 1; t < o.tracks.length; t++){ // skip track zero (it's the transport in Reason)

	var n = o.tracks[t];

	var time_acc = 0;
	var d = [];
	var d_obj;
	var on;

	var min_note = 1000;
	var max_note = -1000;
	
	var min_velocity = 1000;
	var max_velocity = -1000;

	for (var i = 0; i < n.length; i++) {
		time_acc += n[i].deltaTime;
		if (n[i].subtype === "noteOn") { on = 1;
		} else if (n[i].subtype === "noteOff") { on = 0;
		} else { on = -1; }
		if (on == 1) {

			// calculate extrema
			min_note = _.min([min_note, n[i].noteNumber]);
			max_note = _.max([max_note, n[i].noteNumber]);

			min_velocity = _.min([min_velocity, n[i].velocity]);
			max_velocity = _.max([max_velocity, n[i].velocity]);

			d_obj = {
				midi_time: time_acc,
				actual_time: time_acc/(15360*2*tempo/120),

				note: n[i].noteNumber,
				normalized_note: n[i].noteNumber,

				velocity: n[i].velocity,
				normalized_velocity: n[i].velocity,
				on: on
			};
			d.push(d_obj);
			
		}
	}

	console.log(min_note + " " + max_note + " " + min_velocity + " " + max_velocity);

	for (var i = 0; i < d.length; i++) { // calculate normalized values
		d[i].normalized_note = (d[i].note - min_note)/(max_note - min_note);
		d[i].normalized_velocity = (d[i].velocity - min_velocity)/(max_velocity - min_velocity);
	}

	song.push(d);	

}

// okay "var song" is ready... let's write it to a file
//var as_js_file = "var o = " + JSON.stringify(song) + ";"
fs.writeFileSync(out_file_loc, JSON.stringify(song)); //save a copy