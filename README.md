# Gas-Leakage-Monitoring-System
The Gas Leakage Detection System is an Arduino-based safety project designed to detect harmful gas leaks using an MQ-2 gas sensor. The system continuously monitors the surrounding environment for the presence of gases such as LPG, methane, and smoke. When gas concentration exceeds a safe threshold, the system activates an alert mechanism such as a buzzer or LED indicator to warn users and help prevent accidents.

This project aims to provide a simple, low-cost, and effective safety solution for homes, laboratories, and industrial environments. It demonstrates the practical application of embedded systems and sensor technology in real-time monitoring and hazard detection.


## About the Project
The Gas Leakage Detection System is an Arduino-based embedded system project designed to detect harmful gas leaks and provide immediate safety alerts. The system uses an MQ-2 gas sensor to continuously monitor the environment for gases such as LPG, methane, and smoke.

When gas concentration exceeds the predefined safety limit, the Arduino activates a buzzer alarm, turns on a red LED indicator, and displays a warning message on the 16x2 LCD display. Under normal conditions, the system indicates a safe environment using a green LED and LCD status message.

This project aims to enhance safety in homes, laboratories, and industrial environments by providing a simple, low-cost, and reliable gas monitoring solution. It also demonstrates the practical application of embedded systems, sensor interfacing, and real-time monitoring technologies.


## Features
Real-time gas leakage detection using MQ-2 gas sensor
Automatic buzzer alert during gas leakage
Red LED indication for danger detection
Green LED indication for safe condition
16x2 LCD display for status monitoring
Continuous environmental monitoring
Low-cost and easy-to-implement design
Simple and user-friendly operation
Quick response to harmful gas presence
Suitable for home and industrial safety applications


## Components Used
- Arduino Uno
- MQ-2 Gas Sensor
- 16x2 LCD
- Buzzer
- LEDs

## Working
The Gas Leakage Detection System works by continuously monitoring the surrounding environment for the presence of harmful gases using the MQ-2 gas sensor. The sensor detects gases such as LPG, methane, and smoke and sends the detected values to the Arduino microcontroller for processing.

When the gas concentration remains below the predefined safety level, the system indicates a safe condition by turning on the green LED and displaying “Safe” on the 16x2 LCD display.

If the gas concentration exceeds the threshold value, the Arduino identifies it as a gas leakage condition. The system then activates the buzzer alarm, turns on the red LED, and displays “Gas Detected” on the LCD screen to alert users immediately.

This real-time monitoring and alert mechanism helps in preventing accidents, fire hazards, and gas-related dangers in homes, laboratories, and industrial environments.


## Applications
Home and kitchen gas leakage monitoring
Industrial safety and gas monitoring systems
Laboratories and chemical storage areas
Hotels and restaurants using LPG cylinders
Smart home safety applications
Fire hazard prevention systems
Gas storage and distribution units
Real-time environmental safety monitoring
IoT and embedded safety projects
Educational and research applications in embedded systems
