
	//console.log(process.argv)
	
	var in_file_loc = '../Assets/Music/MIDI/demo1.mid';
	//var out_file_loc = 'song.png';
	if (process.argv.length > 2){
		in_file_loc = process.argv[2];
		out_file_loc = process.argv[3];
	}

	var track1;

	//exports.f = function() {

	var _ = require('underscore');

	var fs = require('fs');
	var midiConverter = require('midi-converter');


	console.log('here');
	console.log(in_file_loc)

	var midiSong = fs.readFileSync(in_file_loc, 'binary');
	var jsonSong = midiConverter.midiToJson(midiSong);
	fs.writeFileSync('./raw.json', JSON.stringify(jsonSong)); //save a copy
	var o = require('./raw.json');

	// extracting just notes on/off with velocity from main track 
	/*
	but what if we have more than one track??
	I was creating songs with two tracks in the music_gen program
	*/ 
	var n = o.tracks[4]; 
	var time_acc = 0;
	var d = [];
	var d_obj;
	var on;

	var min_note = 1000;
	var max_note = -1000;
	
	var min_velocity = 1000;
	var max_velocity = -1000;

	var tempo = 140;


	for (var i = 0; i < n.length; i++) {
		time_acc += n[i].deltaTime;
		if (n[i].subtype === "noteOn") {
			on = 1;
		} else if (n[i].subtype === "noteOff") {
			on = 0;
		} else {
			on = -1;
		}
		if (on >= 0) {

			// calculate extrema
			min_note = _.min([min_note, n[i].noteNumber]);
			max_note = _.max([max_note, n[i].noteNumber]);

			min_velocity = _.min([min_velocity, n[i].velocity]);
			max_velocity = _.max([max_velocity, n[i].velocity]);

			// let's just store the note_on portion of each note
			if (on == 1){
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
	}
	//var track_end_time = _.last(d).time;
	console.log(min_note + " " + max_note + " " + min_velocity + " " + max_velocity);


	// calculate normalized values
	for (var i = 0; i < d.length; i++) {
		
		console.log("here: " + d[i].note);

		d[i].normalized_note = (d[i].note - min_note)/(max_note - min_note);
		d[i].normalized_velocity = (d[i].velocity - min_velocity)/(max_velocity - min_velocity);



	}




	console.log(d);







	// write new formatted js or json file here

	/*

	var Canvas = require('canvas')
  	Image = Canvas.Image
  	c = new Canvas(2000,1000)

	  var ctx = c.getContext("2d");
	  var w = c.width;
      var h = c.height;
      ctx.rect(0,0,w,h);
      ctx.fillStyle="#000";
      ctx.fill();
    
      // drawing shapes on canvas using our clean data
      for (var i = 0; i < d.length; i++){

        if (d[i].on === 1){
          centerX = (d[i].time/track_end_time)*w*.9+w*.05;
          centerY = h*.9 - (d[i].note-min_note)/(max_note-min_note)*h*.8;
          radius = (d[i].velocity/127)*3 + .7;
          color = Math.floor((d[i].velocity/127)*150);
          color2 = Math.floor((d[i].velocity/127)*255);
          
          ctx.beginPath();
          ctx.arc(centerX, centerY, radius, 0, 2 * Math.PI, false);
          note_style = 'rgba('+(color2)+','+(255-color2)+','+(255-color2)+','+1+')';
          ctx.fillStyle = note_style;
          //ctx.shadowBlur = radius*10;
          //ctx.shadowColor = note_style;
          ctx.fill();
          ctx.lineWidth = .2;
          ctx.strokeStyle = 'rgba('+(0)+',0,'+(0)+','+1+')';
          ctx.stroke();
          
          ctx.lineWidth = radius*100;
          ctx.strokeStyle = 'rgba('+(color)+',0,'+(255-color2)+','+.03+')';
          ctx.stroke();
        }
        
        
      }

      var out = fs.createWriteStream(out_file_loc)
		  , stream = c.createPNGStream();

		stream.on('data', function(chunk){
		  out.write(chunk);
		});

	*/

//};