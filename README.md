# Servo-Controlled Robotic Hand with Flex Sensors <br>
This project implements a simple robotic hand controlled by servo motors, with movements determined by flex sensors. The flex sensors detect the bend of each finger and translate these readings into corresponding servo movements. <br>

## Components <br>
Arduino Uno: Microcontroller to run the program.
Servo Motors: Five servo motors to control the fingers of the robotic hand.
Flex Sensors: Sensors connected to analog pins that measure the bending of each finger. <br>

## How It Works <br>

### Setup <br>
The project uses the Servo library to control the servo motors.
Each servo motor is assigned to a specific pin and corresponds to a finger: thumb, index, middle, ring, and pinky.
The flex sensors are connected to the analog input pins (A0 to A4) and provide variable resistance based on their bending.
The Serial.begin(9600); command initializes serial communication for debugging and monitoring. <br>

### Loop <br>
The flex sensors read the bending amount for each finger and output analog values to the corresponding pins (A0 through A4).
The raw analog values from the sensors are mapped to servo positions, ranging from 0 to 180 degrees.
The mapped values are written to the corresponding servo motors, which adjust the finger positions accordingly.
The Serial.println(thumbS); command prints the thumb sensor value for monitoring and debugging purposes.
A small delay (delay(10);) is added to stabilize the movement and prevent jitter. <br>

## Pin Assignments <br>
Thumb: Servo on pin 3, flex sensor on pin A0 <br>
Index: Servo on pin 5, flex sensor on pin A1 <br>
Middle: Servo on pin 6, flex sensor on pin A2 <br>
Ring: Servo on pin 10, flex sensor on pin A3 <br>
Pinky: Servo on pin 11, flex sensor on pin A4 <br>

## Notes <br>
The flex sensor values are mapped from a range of 59 to 256 to servo angles from 0 to 180 degrees. These values may need adjustment based on the specific characteristics of your flex sensors and setup.

