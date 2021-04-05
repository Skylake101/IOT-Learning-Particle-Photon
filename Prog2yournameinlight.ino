/*
 * Project yournameinlight
 * Description: 2nd Project of Hello Proton
 * Author: Luke Carlson
 * Date: 9/10/2018
 */
 int led1 = D0;
 int led2 = D7;
 int a = 0;
 double namearray[7] = {670, 650, 820, 760, 830, 790, 780}; //ASCII for CARLSON

 void setup() {
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
 }
 void loop() { //Each time the program runs 'a' increases by 1
   if(a > 6){
       a = 0;
   } else {
       a += 1;
   }
  int t1 = namearray[a]; //whatever 'a' is is the part of the array that is pulled

   digitalWrite(led1, HIGH); // turn it on
   digitalWrite(led2, HIGH);
   delay(t1); // t1 is determined by a
   digitalWrite(led1, LOW); // turn it off
   digitalWrite(led2, LOW);
   delay(500);
 }
