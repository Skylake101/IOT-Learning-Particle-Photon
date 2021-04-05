/*
 * Author: Luke Carlson
 */
 const int dell = 100; //Start of main loop using del1 as your term
 int j = 0;
 void setup(){
//----------------------
//Loop start from main of RGB
}
void loop(){

  if(j<10){
        for (int i = 0; i<10; i++){ //Begin basic loop

     RGB.control(true);
     RGB.color(randoNum(), randoNum(), randoNum());//three randomnums
     delay(dell);
     RGB.brightness(128);//Main brightness
     delay(dell);
     RGB.control(false); //control as instructed
   }
   j++; //reloop thing
 }
 }
   int randoNum(){
   return (rand()%256);
 }
