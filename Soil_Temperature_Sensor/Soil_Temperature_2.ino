#define SensorPin A0 
float sensorValue = 0; 
void setup() { 
 Serial.begin(9600); 
} 
void loop() { 
 for (int i = 0; i <= 100; i++) 
 { 
   sensorValue = sensorValue + analogRead(SensorPin); 
   delay(1); 
 } 
 sensorValue = sensorValue/100.0; 
 Serial.println(sensorValue); 
 delay(50);
 }