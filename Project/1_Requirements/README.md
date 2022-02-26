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
|   Requirements    |                                                    Description                                             |
| ------------------|  -------------------------------------------------------------------------------------------------------   |
|   Arduino UNO     |     The arduino is open source microcontroller board designed by arduino.cc based                           
                    |      microchip   ATmega328p microprocessor. The board has a number of digital analogue input/output pins that can be used to |connect to expansion boards and other devices. The board contains 14 digital I/O pins and 6 analogue I/O pins, and it can be ||programmed using the Arduino IDE and a USB type B  connector.|
|   LCD Display     |   A LCD Display is flat panel display that uses liqutd crystal light modulating characteristics in conjunction with 
                        polarizers Liquid crystals do not directly emit light; instead, they use a backlight or reflector to create colour or monochrome images.|
| HC-SR04 sensor    | Two ultrasonic transducers make up the HC-SR04 ultrasonic sensor. The one serves as a transmitter, converting the electrical
                      signals into ultrasonic sound pulses at a frequency of 40 KHz. The sensor is compact, easy to integrate into any robotics project, and provides outstanding non-contact range detection with a 3mm accuracy between 2 cm and 400 cm. It may be immediately connected to an Arduino or any other 5V logic microcontroller because it runs on 5 volts. |
|  Servo motor      |  A servo motor  is a rotary actuator or linear actuator that allows for precise control of angular or                      
                       linear position, velocity and acceleration.[1] It consists of a suitable motor coupled to a sensor for position feedback. It also requires a relatively sophisticated controller, often a dedicated module designed specifically for use with servomotors.|
|   Buzzer          | It generates the sound, which is helpful to warn the obstacles |
|  Potentiometer    | It is used to measure the voltage or the electric potential |       
|  Resistor(220ohm) | It is helpful to provide the resistance |                                