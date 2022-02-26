# Security System/Area surveiallance Using Ultra-sonic sensor
## Abstract
In this project, an ultrasonic sensor is tied to a servo motor. The servo motor rotates continuously between 0 and 180 degrees, performing the function of a radar. When an object comes in the range of the sensor, the sensor tracks it and raises an alarm. The corresponding distance of the object from the sensor gets displayed on the LCD screen.
## Requirements
### Low Level Requirements
| Requirements |                Description                 |
| ------------ | ------------------------------------------ |
|    LLR-1     |  Arduino UNO for working of the circuit
|    LLR-2     |  Usage of servo motor for rotation          |
|    LLR-2     |  LCD display for showing the distance       |
|    LLR-4     |  Ultra sonic sensor for surveiallance       |
|    LLR-5     |  Buzzer for warning of the object           |

### High Level Requirements
|    Requirements        |               Description                   |
| ---------------------- | ------------------------------------------- |
|    HLR-1(Arduino)      |  * Should receive the data from the sensor and process it | 
|     HLR-1.1            |  * Maintaining Rotation of the servo motor  |
|     HLR-1.2            |  * Display the data(distance) on the LCD | 
|     HLR-1.3            |  * Should make the buzzer on, if object detected |
|     HLR-2(Servo Motor) |  It should rotate from 0 to 180 degree with bit faster rate | 
|     HLR-3(LCD)         |  It should display the proper distance of the object in centimeters |
|     HLR-4(US)          |  HC-SR04 is a ultrasonic sensor which works using SONAR to detect object |
|     HLR-5(Buzzer)      |  This is a sound device that warns with a buzzer |

## Components
    Requirements                                                       Description                                             

   Arduino UNO:- *The arduino is open source microcontroller board designed by arduino.cc based                           
                 microchip   ATmega328p microprocessor. The board has a number of digital analogue input/output pins that can be used to connect to expansion boards and other devices. The board contains 14 digital I/O pins and 6 analogue I/O pins, and it can be programmed using the Arduino IDE and a USB type B  connector.  <br/>     
   LCD Display:-  * A LCD Display is flat panel display that uses liqutd crystal light modulating characteristics in conjunction with 
                 polarizers Liquid crystals do not directly emit light; instead, they use a backlight or reflector to create colour or monochrome images. <br/>   
  HC-SR04 sensor:-  * Two ultrasonic transducers make up the HC-SR04 ultrasonic sensor. The one serves as a transmitter, converting the          
                 signals into ultrasonic sound pulses at a frequency of 40 KHz. The sensor is compact, easy to integrate into any robotics project, and provides outstanding non-contact range detection with a 3mm accuracy between 2 cm and 400 cm. It may be immediately connected to an Arduino or any other 5V logic microcontroller because it runs on 5 volts.  <br/>   
  Servo motor:-   *A servo motor  is a rotary actuator or linear actuator that allows for precise control of angular or                      
                linear position, velocity and acceleration.[1] It consists of a suitable motor coupled to a sensor for position feedback. It also requires a relatively sophisticated controller, often a dedicated module designed specifically for use with servomotors.  <br/>   
   Buzzer :-           *It generates the sound, which is helpful to warn the obstacles  <br/>   
  Potentiometer :-     * It is used to measure the voltage or the electric potential    <br/>        
  Resistor(220ohm):-   * It is helpful to provide the resistance   <br/>                                  

  ## Swot Analysis
   ### Strength
   * It can be used in parking system to avoid collisions
   * It can be used for surveillance for enhancement in security

   ### Opportunities
   * Peripherals can be added to show warning messages
   * It can also be used in water level sensing in tanks 

   ### Weakness
   * If the device is not fast enough may cause collisions
   * The servo motor may not handle the load of ultra-sonic sensor and might rotate with slower rotation speed.


   ## 4W's and 1H

   ### Where it is used
   * Used in parking system
   * Used for surveiallance in particular areas for security
   ### What is advantage
   * Avoids collision of vehicles
   * provides enhanced security

   ### Who will benefit
   * In vehicles for anti-collision system
   * In certain areas where more security is necessary
   ### When it is used
   * At very crucial times for stopping collisions
   * When manual security is not much effective
   ### How it is done
   * It is done using arduino uno, servo motor, LCD screen,ultra-sonic sensor, buzzer and other required components