/* Cinderella
Team Members: Priscilla Osorio and Samantha Miranda
Description: This program creates the transformations; the servos turn to reveal diferent looks
*/

#include <Servo.h>

//Servos
Servo myservo1;  //Pumpkin-Carriage
Servo myservo2;  //Mice-Horses
Servo myservo3;  //Pink-Silver

//Button-flowers for Fairy Godmother
const int buttonPin1 = 11;
const int buttonPin2 = 9;
const int buttonPin3 = 13;

void setup() {
  //Pumpkin-Carriage
  myservo1.attach(8);
  pinMode(buttonPin1, INPUT);

  //Mice-Horses
  myservo2.attach(10);
  pinMode(buttonPin2, INPUT);

  //Pink-Silver
  myservo3.attach(12);
  pinMode(buttonPin3, INPUT);
}

void loop() {
  //When Fairy Godmother touches Flower 1, Pumpkin-Carriage
  if (digitalRead(buttonPin1) == HIGH) {
    myservo1.write(180);
  } else {
    myservo1.write(0);
  }
  //When Fairy Godmother touches Flower 2, Mice-Horses
  if (digitalRead(buttonPin2) == HIGH) {
    myservo2.write(180);
  } else {
    myservo2.write(0);
  }

  //When Fairy Godmother touches Flower 3, Pink-Silver
  if (digitalRead(buttonPin3) == HIGH) {
    myservo3.write(180);
  } else {
    myservo3.write(0);
  }
}
