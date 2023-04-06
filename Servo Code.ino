#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;

const int buttonPin1 = 9;
const int buttonPin2 = 11;
const int buttonPin3 = 13;

void setup() {
  myservo1.attach(8);
  pinMode(buttonPin1, INPUT);

  myservo2.attach(10);
  pinMode(buttonPin2, INPUT);

  myservo3.attach(12);
  pinMode(buttonPin3, INPUT);
}

void loop() {
  if (digitalRead(buttonPin1) == HIGH) {
    myservo1.write(180);
  } else {
    myservo1.write(0);
  }

  if (digitalRead(buttonPin2) == HIGH) {
    myservo2.write(180);
  } else {
    myservo2.write(0);
  }

    if (digitalRead(buttonPin3) == HIGH) {
    myservo3.write(180);
  } else {
    myservo3.write(0);
  }
}
