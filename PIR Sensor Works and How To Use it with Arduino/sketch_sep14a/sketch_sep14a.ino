/*     Arduini PIR Motion Sensor Tutorial
 *      
 *  by Dejan Nedelkovski, www.HowToMechatronics.com
 *  
 */
int pirSensor = 8;
int relayInput = 7;

void setup() {
  pinMode(pirSensor, INPUT);
  pinMode(relayInput, OUTPUT);  
}

void loop() {
  int sensorValue = digitalRead(pirSensor);

  if (sensorValue == 1) {
    digitalWrite(relayInput, LOW); // The Relay Input works Inversly
  }
}
