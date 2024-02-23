# Temperature and Distance Measurement Arduino Project
This Arduino project combines temperature sensing with an analog sensor and distance measurement using an ultrasonic sensor. The program reads the temperature, converts it to Celsius, and then measures the distance using ultrasonic pings. The results are displayed on the Serial Monitor.

This was done in the 2021-2022 Science Mentorship Programme under Science Centre Singapore. The paper was presented in the 27th Youth Science Conference.

## Hardware Requirements
- Arduino board
- Temperature sensor
- Ultrasonic sensor
- Connecting wires

## Dependencies
- NewPing library: [Link to NewPing Library](https://bitbucket.org/teckel12/arduino-new-ping)

## Setup
1. Connect the temperature sensor to analog pin A0.
2. Connect the ultrasonic sensor to trigger pin 9 and echo pin 10.
3. Install the NewPing library in your Arduino IDE.

## How to Use
1. Upload the sketch to your Arduino board.
2. Open the Serial Monitor to view temperature and distance measurements.
3. The program will display temperature in Celsius and distance in millimeters.
