/*
LED light 1 starts on
All servos at 0 degrees

//Move straizo to the appointed location

If (circuit1 is completed) {
	Servo1 rotate 180 // turns jojo 180 degrees
	Led light 1 = off
	Led light 2 = on
}

// move the grenade towards straizo

If (circuit2 is completed) {
	Servo2 rotate 180 // turns straizo 180 degrees
	Led light 2 = off
	Led light 3 = on
}

// pull the arrow that pulls straizo's body together

If (circuit3 is completed) {
	Servo3 rotate 180 // flip jojo by turning him 180 degrees
	Led light 3 = off
}

*/
void setup() {
 
   pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  //delay(1000);                      // wait for a second
  //digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  //delay(1000);                      // wait for a second
}


