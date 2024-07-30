# ArduinoProxSensor

This project demonstrates how to use an Arduino to measure the distance to an object using an ultrasonic sensor (HC-SR04) and display the result on a 16x2 LCD screen. The project involves triggering the ultrasonic sensor to send an ultrasonic pulse, measuring the time it takes for the pulse to return, calculating the distance, and then displaying the distance on the LCD.

## Components and Connections

### Hardware
- Arduino Uno
- Ultrasonic Sensor (HC-SR04)
- 16x2 LCD Display
- Jumper Wires
- Breadboard 

### Connections
- **Ultrasonic Sensor:**
  - Trigger Pin: Connect to Arduino pin 18 (A4)
  - Echo Pin: Connect to Arduino pin 19 (A5)
  - VCC: Connect to 5V
  - GND: Connect to Ground
- **16x2 LCD Display:**
  - RS: Connect to Arduino pin 2
  - RW: Connect to Ground
  - En: Connect to Arduino pin 3
  - D4-D7: Connect to Arduino pins 4, 5, 6, and 7 respectively
  - VCC: Connect to 5V
  - GND: Connect to Ground
