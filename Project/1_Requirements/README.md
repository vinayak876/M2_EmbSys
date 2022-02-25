#Abstract

## Low Level Requirements
| Requirements |                Description                 |
| ------------ | ------------------------------------------ |
|    LLR-1     |  Arduino UNO for working of the circuit
|    LLR-2     |  Usage of servo motor for rotation          |
|    LLR-2     |  LCD display for showing the distance       |
|    LLR-4     |  Ultra sonic sensor for surveiallance       |
|    LLR-5     |  Buzzer for warning of the object           |

## High Level Requirements
|    Requirements        |               Description                   |
| ---------------------- | ------------------------------------------- |
|    HLR-1(Arduino)      |  *Should receive the data from the sensor and process it | 
|     HLR-1.1            |  *Maintaining Rotation of the servo motor  |
|     HLR-1.2            |  *Display the data(distance) on the LCD | 
|     HLR-1.3            |  *Should make the buzzer on, if object detected |
|     HLR-2(Servo Motor) |  *It should rotate from 0 to 180 degree with bit faster rate | 
|     HLR-3(LCD)         |  *It should display the proper distance of the object in centimeters |
|     HLR-4(US)          |  *HC-SR04 is a ultrasonic sensor which works using SONAR to detect object |
|     HLR-5(Buzzer)      |  *This is a sound device that warns with a buzzer |

## Components
|   Requirements         |                                                    Description                                        |
| ---------------------  ------------------------------------------------------------------------------------------------------- |
|    Arduino UNO         |The Arduino Uno is an open-source microcontroller board designed by Arduino.cc and based on the Microchip ATmega328P microprocessor. The board has a number of digital and analogue input/output (I/O) pins that can be used to connect to expansion boards and other devices. The board contains 14 digital I/O pins and 6 analogue I/O pins, and it can be programmed using the Arduino IDE and a USB type B connector.