//PhotoTransistor Test

//This uses the code from http://bildr.org/2011/03/various-proximity-sensors-arduino/

int sensorPin = 0;
int ledPin = 13;
int outputLevel = 0;
void setup(){
 Serial.begin(9600); 
 pinMode(ledPin,OUTPUT);
}

void loop(){
  int val = analogRead(sensorPin);
  Serial.println(val);
  //Slow down output to be understandable, remove for higher reaction speed
  delay(100);
  //Outputs to LED
  outputLevel = ((val+1)/4)-1;    //Converts a 0-1024 PhotoTransistor output to a 0-255 LED input
  analogWrite(ledPin,outputLevel);
}
