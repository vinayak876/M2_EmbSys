#include <LiquidCrystal.h> //LCD library
#include<Servo.h> //Servo library
#define echo   2
#define trig   3
#define Buzzer 7
const int scan_Distance = 50;//distance upto which the sensor should scan
float  duration; // time taken by the pulse to return back
float distance;  // oneway distance travelled by the pulse
Servo myservo ;
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);//lcd(RS,EN,D4,D5,D6,D7) 
void setup() {
  myservo.attach(6); // Servo is connected to Digital pin 6
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(Buzzer,OUTPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
}
void loop() {                         // Here the code is about calculating the distance
  for (int i = 0; i <= 180; i++) {
    myservo.write(i);
    time_Measurement();
    distance = duration * (0.0343) / 2;
    if (distance <= scan_Distance) {
      intruder_detected();       
    }
    else {
      lcd.clear();
      lcd.print("Scanning...... ");
    }
    delay(100);
  }
  for (int i = 180; i >= 0; i--) {
    myservo.write(i);
    time_Measurement();
    distance = (float)duration * (0.0343) / 2;
    if (distance <= scan_Distance) {
      intruder_detected();  
    }
    else {
      lcd.clear();
      lcd.print("Scanning...... ");
    }
    delay(100);
  }    
}
void time_Measurement() // Here the code is about measuring of the obstacle from the ultra-sonic sensor when it is in range
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
}
void intruder_detected()// Here the code is about the obstacle detection where the buzzer gets on , indicating that obstacle has been detected
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("  Intruder at ");
  lcd.setCursor(0, 1);
  lcd.print("    ");
  lcd.print(distance);
  lcd.print(" cm");
  digitalWrite(Buzzer, HIGH);
  delay(3000);
  digitalWrite(Buzzer, LOW);
}