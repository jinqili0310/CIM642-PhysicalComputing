* About The Project
  * Title: HitMeUp Robot
  * Motivation: I have a trouble that I cannot hear the alarm clock sometimes. So I need a robot to wake me up when the alarm clock rings.      * Stakeholders: People who have the same trouble as me.
    * Inspring Projects: 
      * Tiny Arduino Music Visualizer: https://learn.adafruit.com/piccolo/overview
      * Sound Sensor Module with Arduino Tutorial "Clap Switch": https://www.youtube.com/watch?v=YC8QaDniHSw&t=39s
      * Multiple Servo Control with Arduino Uno R3: https://www.youtube.com/watch?v=TkA2LJctU1c
        
* Code
  * [Code Link](https://github.com/kikijinqili/CIM642-JinqiLi/blob/master/hw-mid/midterm.ino)
    
* Components
  * Part List
    * Electret Microphone Amplifier 
    * Servo Motor
  * Input & Output
    * Input: Electret Microphone Amplifier -- Sound
    * Output: Servo Motor -- Kinetic Energy
      
* Interaction
  * Layout
    [![](https://kikijinqili.github.io/CIM642-JinqiLi/midterm/mid1.jpg)](https://kikijinqili.github.io/CIM642-JinqiLi/midterm/mid1.jpg)
  * Storyboard 
    [![](https://kikijinqili.github.io/CIM642-JinqiLi/midterm/flow-hmu.png)](https://kikijinqili.github.io/CIM642-JinqiLi/midterm/flow-hmu.png)
    * Explanation
      * User turn on the alarm clock to input the sound into the microphone.
      * I want to use the sound to make the servo motor move.
      * The sound is detected by the microphone, and this information is delivered to the Arduino, then the servo motor would move.
  * Ideally, the project should be a real boxing glove motivated by a large motor which would move when the sound sensor received the sound of the alarm clock.
    
* Images and Videos
  * Images
    * Progress
      [![](https://kikijinqili.github.io/CIM642-JinqiLi/midterm/mid5.jpg)](https://kikijinqili.github.io/CIM642-JinqiLi/midterm/mid5.jpg)
      [![](https://kikijinqili.github.io/CIM642-JinqiLi/midterm/mid6.jpg)](https://kikijinqili.github.io/CIM642-JinqiLi/midterm/mid6.jpg)
    * Finished Input <br/>
      [![](https://kikijinqili.github.io/CIM642-JinqiLi/midterm/mid4.jpg)](https://kikijinqili.github.io/CIM642-JinqiLi/midterm/mid4.jpg)
    * Finished Output
      [![](https://kikijinqili.github.io/CIM642-JinqiLi/midterm/mid3.jpg)](https://kikijinqili.github.io/CIM642-JinqiLi/midterm/mid3.jpg)
    * Finished Breadboard
      [![](https://kikijinqili.github.io/CIM642-JinqiLi/midterm/mid2.jpg)](https://kikijinqili.github.io/CIM642-JinqiLi/midterm/mid2.jpg)
      
  * Video
    * [Video Link](https://youtu.be/0r-pEjBan0s)
