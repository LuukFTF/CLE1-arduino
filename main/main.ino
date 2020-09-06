#include <Servo.h>

Servo myservo;

int pos = 0;
int motorPin = 3;

void setup() {
  myservo.attach(9);

  digitalWrite(motorPin, HIGH);
}

void loop() {
  moveTo(1);
  delay(1000);
  moveTo(360);
  delay(1000);  

}

int moveTo(int pos) {
  myservo.write(pos);
}
