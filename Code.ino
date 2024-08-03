// Jubran Khoury 

#include <Servo.h>
Servo thumb;
Servo index;
Servo middle;
Servo ring;
Servo pinky;

void setup()
{
  thumb.attach(3);
  index.attach(5);
  middle.attach(6);
  ring.attach(10);
  pinky.attach(11);
  Serial.begin(9600);
}

void loop()
{
  int thumbS=analogRead(A0);
  int indexS=analogRead(A1);
  int middleS=analogRead(A2);
  int ringS=analogRead(A3);
  int pinkyS=analogRead(A4);
  Serial.println(thumbS);
  
  thumbS=map(thumbS,59,256,0,180);
  indexS=map(indexS,59,256,0,180);
  middleS=map(middleS,59,256,0,180);
  ringS=map(ringS,59,256,0,180);
  pinkyS=map(pinkyS,59,256,0,180);
  
  thumb.write(thumbS);
  index.write(indexS);
  middle.write(middleS);
  ring.write(ringS);
  pinky.write(pinkyS);
  delay(10);
}
