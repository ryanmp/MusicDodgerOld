//
//  GameScene.swift
//  MusicDodger
//
//  Created by Ryan Phillips on 7/21/15.
//  Copyright (c) 2015 Ryan Phillips. All rights reserved.
//

/*

todo:
add two rectangle colliders/physics bodies for ceiling and floor.. make sure that enemies bounce off these objects






*/

import SpriteKit

class GameScene: SKScene {
    
    
    
    func rand_float() -> CGFloat {
        var ret = CGFloat(Float(arc4random()) / Float(UINT32_MAX))
        return ret
    }
    
    func rand_float(#min: CGFloat, max: CGFloat) -> CGFloat {
        var ret = CGFloat(Float(arc4random()) / Float(UINT32_MAX))
        ret = ret*(max-min)
        ret += min
        return ret
    }
    
    /*
    func rand_float(#min: Int, max: Int) -> CGFloat {
        var ret = CGFloat(Float(arc4random()) / Float(UINT32_MAX))
        ret = ret*(CGFloat(max)-CGFloat(min))
        ret += CGFloat(min)
        return ret
    }*/
    
    var starting_pos = 0;
    
    var Circle2 = SKShapeNode(circleOfRadius: 10 )
    
    override func didMoveToView(view: SKView) {
        
        // runs every 2 seconds
        var helloWorldTimer = NSTimer.scheduledTimerWithTimeInterval(1.0, target: self, selector: Selector("sayHello"), userInfo: nil, repeats: true)
        
        /* Setup your scene here */
        let myLabel = SKLabelNode(fontNamed:"Helvetica")
        myLabel.text = "";
        myLabel.fontSize = 65;
        myLabel.position = CGPoint(x:CGRectGetMidX(self.frame), y:CGRectGetMidY(self.frame));
        self.addChild(myLabel)
        
        
        self.backgroundColor = SKColor(hue: 0.1, saturation: 0.8, brightness: 0.1, alpha: 1.0)
        
    }
    
    override func touchesBegan(touches: Set<NSObject>, withEvent event: UIEvent) {
        /* Called when a touch begins */
        
        for touch in (touches as! Set<UITouch>) {
            let location = touch.locationInNode(self)
            drawCircle(location)
        }
    }
   
    
    func sayHello()
    {
        drawCircle(CGPoint(x: 800.0, y: 400.0))
    }

    func drawCircle(location: CGPoint){
        var rand_radius = rand_float(min: 5.0, max: 20.0)
        var Circle = SKShapeNode(circleOfRadius: rand_radius ) // Size of Circle = Radius setting.
        Circle.position = location  //touch location passed from touchesBegan.
        Circle.name = "name"
        
        var rand_hue = rand_float(min: 0.0, max: 1.0)

        Circle.strokeColor = SKColor(hue: rand_hue, saturation: 0.8, brightness: 0.4, alpha: 1.0)
        Circle.glowWidth = 0.5
        
        Circle.fillColor = SKColor(hue: rand_hue, saturation: 0.8, brightness: 0.4, alpha: 1.0)
        
        Circle.physicsBody = SKPhysicsBody(circleOfRadius: rand_radius)
        Circle.physicsBody?.velocity = CGVectorMake(rand_float(min: -20.0, max: -150.0), rand_float(min: -50.0, max: 50.0))
        Circle.physicsBody?.affectedByGravity = false
        Circle.physicsBody?.linearDamping = 0.0 // air friction
        self.addChild(Circle)
    }
    
    override func update(currentTime: CFTimeInterval) {
        
        //println(currentTime)
        
        
        /* Called before each frame is rendered */
        
        //var new_pos = Double(starting_pos) + 150.0
        //Circle2.position = CGPoint(x: new_pos,y: 150.0)
        //starting_pos += 1
        
    }
}
