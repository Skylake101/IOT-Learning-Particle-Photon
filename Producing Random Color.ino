/*
 * Author: Luke Carlson
 * My photon came with an RGB component that uses red, green and blue
 * Each of these colors can be set between 0-255 (Read particles API to learn more about the firmware)
 * https://docs.particle.io/reference/device-os/firmware/photon/
 * I set this program to flash 10 random colors with a 1 second rest time in between
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
