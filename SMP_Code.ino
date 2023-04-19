#include <NewPing.h>  
#define TRIGGER_PIN  9  
#define ECHO_PIN     10  
#define MAX_DISTANCE 140  
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);  

int analogVal;   

int tempPin = A0;   

float voltage, temp;   

const int trigPin = 9;     

const int echoPin = 10;   

float duration;  

void setup() {  
  Serial.begin(9600); // Starts the serial communication  
}   

void loop() {  

analogVal = analogRead(tempPin);   

voltage = (analogVal*5.000)/1024;   

float tempC = voltage*100;  

float temp = (tempC + 273);   

Serial.print(temp);   

delay(50);  

Serial.print(" ");  
Serial.print(millis()); // Prints the time in millisec and distance in mm on the Serial Monitor    
Serial.print(" ");   

Serial.println(sonar.ping_median()); //Do multiple pings (default=5), discard out of range pings and return median in microseconds  

delay (1000);  
} 
