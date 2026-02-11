#include <ESP32Servo.h>   // includes the servo library for ESP32

Servo firstServo;         // creates a servo object called firstServo

Servo horiServo;          // creates a servo object called horiServo

void setup() {
  firstServo.attach(26);  // connects firstServo to GPIO pin 26

  horiServo.attach(18);   // connects horiServo to GPIO pin 18
}

void loop() {
  // put your main code here, to run repeatedly:

  firstServo.write(27);   // move firstServo to 27 degrees

  horiServo.write(21);    // move horiServo to 21 degrees

  delay(400);             // wait 0.4 seconds

  firstServo.write(89);   // move firstServo to 89 degrees

  horiServo.write(110);   // move horiServo to 110 degrees

  delay(400);             // wait 0.4 seconds

  firstServo.write(172);  // move firstServo to 172 degrees

  horiServo.write(180);   // move horiServo to 180 degrees
  
  delay(400);             // wait 0.4 seconds

  firstServo.write(180);  // move firstServo to 180 degrees

  firstServo.write(90);   // immediately move firstServo to 90 degrees

  delay(400);             // wait 0.4 seconds
}
