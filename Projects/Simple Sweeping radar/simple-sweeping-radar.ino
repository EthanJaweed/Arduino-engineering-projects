#include <Servo.h>
Servo myservo;
const int servoPin = 7;
const int trigPin = 2;
const int echoPin = A0;
const int ledPin = 4;
int sweep = 0;
void setup() {
  Serial.begin(9600);
  myservo.attach(servoPin);
  pinMode(7, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  

  
  // put your setup code here, to run once:

}

void loop() {
  
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(8);
    digitalWrite(trigPin, LOW);
    float duration = pulseIn(echoPin, HIGH);
    delayMicroseconds(8);

    Serial.println(duration);

    if (duration > 500) {
      Serial.println("Safe");
      digitalWrite(ledPin, LOW);
  
    
    } else {
      Serial.println("Alarm");
      digitalWrite(ledPin, HIGH);
    }


     for (int pos = 45; pos <= 135 ; pos += 1) {
      myservo.write(pos);
     delay(10);
 }
  
   for (int pos = 135; pos >= 45; pos -= 1) {
     myservo.write(pos);
      delay(10);
  }
  

}
  

  // put your main code here, to run repeatedly:


