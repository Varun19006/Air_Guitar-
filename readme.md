# 🎸 Air Guitar using Arduino

An interactive gesture-controlled Air Guitar built using Arduino and ultrasonic sensors that generates musical notes based on hand movement.

## Features
- Touchless note generation
- Real-time sound output using buzzer
- Simple and low-cost project
- Great for embedded systems and Arduino learning

## Components Used
- Arduino Uno
- Ultrasonic Sensors (HC-SR04)
- Passive Buzzer
- Breadboard
- Jumper Wires

## Working Principle
Ultrasonic sensors measure the distance of your hand. Different distance ranges trigger different frequencies, producing musical notes like an air guitar.

## Circuit Connections
### Ultrasonic Sensor 1
- VCC → 5V
- GND → GND
- Trig → Pin 9
- Echo → Pin 10

### Buzzer
- Positive → Pin 8
- Negative → GND

## Arduino Code
See `code/air_guitar.ino`

## How to Run
1. Upload code to Arduino Uno.
2. Connect components as per circuit.
3. Move your hand in front of sensor to play notes.

## Future Improvements
- Add multiple strings (more sensors)
- Chord generation
- Speaker amplifier
- MIDI output support

## Author
Varun Goel
