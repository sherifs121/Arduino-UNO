/**********
Rui santos 
Complete project details at https://randomnerdtutorials.com
***********/
// Realy pin is controlled with D8. The avtive wire is connected Normally and common
int relay = 8;
volatile byte relayStae =Low;
// PIR Motion Sensor is connect to D2.
int PIRnterrupt =2;
//Timer Variables 
long lastDenounceTime =0;
long debounce Delay =1000;

void setup() {
  // put your setup code here, to run once:
//Pin for relay module set as output 
pinMode(realy, OUTPUT);
digitalWrite(relay, HIGH);
//PIR motion sensor set as an input 
pinMode(PIRInterrput, INPUT);
//Triggers detectMotion Function on rising mode to turn the relay on, if the condtion is met 
attachInterrupt(digitalPinToInterrupt(PIRInterrupt), detectMotion, RISING);
//Serial communcation for debugging purposes 
Searial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
//If 10 seconds have passed, the relay is turned off
if((millis()-lastDebounceTime) > debounceDelay && relayState ==HIGH){
  digitalWrite(relay, HIGH);
  relayState =LOW;
  Serial.println("OFF");
}
delay(50);
}
void detectMotion(){
  Serial.println("Motion");
  if(relayState == LOW);
    digitalWrite(relay, LOW);
}
relayState =HIGH;
Serial.println("ON");
lastDebounceTime =millis();
}