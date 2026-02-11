# ESP32 Dual Servo Control

## Overview
This project demonstrates coordinated control of two servo motors using an ESP32 microcontroller.

Each servo is attached to a separate GPIO pin and commanded to move to specific angular positions in a timed sequence. The system demonstrates multi-actuator control and synchronized motion.

This project builds foundational robotics concepts related to actuator coordination and embedded motion control.

---

## 🎥 Demo Video
[![Watch the Servo Demo](https://img.youtube.com/vi/80KLpR3Vgyo/0.jpg)](https://youtube.com/shorts/80KLpR3Vgyo)

---

## Concepts Practiced
- Multi-servo control
- ESP32 GPIO configuration
- PWM-based actuator positioning
- Coordinated motion sequences
- Embedded timing control

---

## Hardware Used
- ESP32
- 2x Servo Motors
- Breadboard
- Jumper wires
- External power source (if required)

---

## Wiring
- Servo 1 Signal → GPIO 26
- Servo 2 Signal → GPIO 18
- Both servos powered appropriately
- Shared ground with ESP32

---

## How It Works
1. Two servo objects are created.
2. Each servo is attached to a specific GPIO pin.
3. In the loop, both servos are moved to defined angles.
4. The system cycles through multiple position states.
5. A 400ms delay controls movement timing.

The motion sequence simulates coordinated actuator positioning similar to robotic joints.

---

## Code

```cpp
#include <ESP32Servo.h>

Servo firstServo;
Servo horiServo;

void setup() {
  firstServo.attach(26);
  horiServo.attach(18);
}

void loop() {

  firstServo.write(27);
  horiServo.write(21);
  delay(400);

  firstServo.write(89);
  horiServo.write(110);
  delay(400);

  firstServo.write(172);
  horiServo.write(180);
  delay(400);

  firstServo.write(180);
  firstServo.write(90);
  delay(400);
}
```
