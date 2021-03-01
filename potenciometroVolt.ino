int analogPin=A0; // potentiometer wiper (middle terminal) connected to analog pin 3
// outside leads to ground and +5V
float val=0; // variable to store the value read
  void setup() {
    Serial.begin(9600); // setup serial
  }
  void loop() {

  val = (analogRead(analogPin)*5); // read the input pin
  val = val/1023;
  Serial.print ("Voltaje: ");
  Serial.print(val); // debug value
  Serial.println (" V ");
}
