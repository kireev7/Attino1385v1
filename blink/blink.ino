void setup() {
  // initialize digital Pin 3 of ATtiny 13(defined in hardware as 4) as an output.
  pinMode(4, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}
