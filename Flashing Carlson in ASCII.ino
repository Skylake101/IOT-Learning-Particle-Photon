/*
 * Author: Luke Carlson
 * To show some originality in my code, I made D7 flash 10x the ascii code for the letters in my last name
 * My last name is CARLSON, with the code 67,65,82,76,83,79,78 so I flashed 670, 820, etc.
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
