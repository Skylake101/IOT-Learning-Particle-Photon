/*
 * Project Blink Once
 * Description: First Project of Hello Proton
 * Author: Luke Carlson
 * Date: 9/10/2018
 */

int led1 = D0; //D0, D7, OUTPUT, HIGH, etc. are all defined in
int led2 = D7; // an Arduino.h file (?) that gets linked in
int t1 = 50; //Currently set to 100

//-------------------------3
//Need to create a loop to increase by a factor of 3 until exceeding 4050
//Time = 50;

//if time > 4050;
//Time = 50;

//else
//time *= 3;
//----------------



void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}
void loop() {

  if(t1 > 4050){
      t1 = 50;
  } else {
      t1 *= 3;
  }


  digitalWrite(led1, HIGH); // turn it on
  digitalWrite(led2, HIGH);
  delay(t1); // in ms, of course
  digitalWrite(led1, LOW); // turn it off
  digitalWrite(led2, LOW);
  delay(500);
}
