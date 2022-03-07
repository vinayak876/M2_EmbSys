# Test Plan
##   Low Level Output
| SL.No |                Description                          |      Exp i/p     |     Exp o/p     |     Actual o/p | Test Type |   
|-------|-----------------------------------------------------|------------------|-----------------|---------------------|--------------------|
|   1   | When power supply is given all the components  should activate|Power input| Components activated | Components Activated |Technical based|
|   2   | To check if the servo motor is working              | Message passed in code | Angling of motor | Angling of motor | Technical based|
|   3   | To the check the message displayed                  |  Message passed in code | Message displayed | Message displayed |Technical based|
|   4   | To check the buzzer out                             | Object in range | buzzer sound | buzzer sound |Technical based|

## High Level Output

| SL.No |                Description                          |   Exp i/p | Exp o/p |  Actual o/p | Test Type |  
|-------|-------------------------------------|--------------------|--------------|-------------|-----------|
|   1   | To check if the servo motor is rotating btw(0 to 180) | Message passed  | Angling of motor  | Angling of motor |Technical based| 
|   2   | To the check the message displayed of object distance|  sensor detects | Message displayed | Message displayed |Technical based|
|   3   | Ultra-sonic sensor should detect the obstacle | Obstacle in range | Detected | Detected |Technical based|
|   4   |Servo motor should pause ,when ultra-sonic sensor detects obstacle | Obstacle in range | Servo motor stopped | Servo motor stopped|Technical based|

