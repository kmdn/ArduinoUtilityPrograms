/*
  Blink all ports
  Turns on an LED (or whatever) for a set amount of time and then turns it off
  does this for all the output pins on your board
 
  This example code is in the public domain. Hacked from blink example.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 0; //Initial pin to start

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
for(int j=0; j<5;j++){ //Set the number of pins on your board (TIny has 5 total from 0 to 4)
  pinMode(j, OUTPUT);

}  
 // Serial.begin(9600);
  
}

// the loop routine runs over and over again forever:
void loop() {
//Serial.println(led);
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(100);               // wait for a second
  
//    digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(50);               // wait for a second
//  digitalWrite(0, LOW);    // turn the LED off by making the voltage LOW
//  delay(50);               // wait for a second
led++;
  if(led >4){led=0;}

}
