const int soundSensor = A0; //set arduino position of sound sensor

#include <Servo.h>
Servo servo1; //define servo motor

int servoPos = 0; //set moving position of servo motor

void setup() {
  
  pinMode (3, OUTPUT); //set output

  servo1.attach(3); //set arduino position of servo motor

}

void loop() {

  int sensorValue = analogRead (soundSensor); 
  //define value of sound sensor

  if (sensorValue > 570){

  for(servoPos = 0; servoPos < 120; servoPos++){
    servo1.write(servoPos);
    delay(6);
  }

  for(servoPos = 120; servoPos > 0; servoPos--){
    servo1.write(servoPos);
    delay(6);
  }
  
  } //define when the robot runs

}
