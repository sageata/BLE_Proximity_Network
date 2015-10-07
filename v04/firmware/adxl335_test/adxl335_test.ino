/*
  Analog Input
 Demonstrates analog input by reading an analog sensor on pin 5 and
 turning on and off a light emitting diode(LED) connected to pin 3. 
 The amount of time the LED will be on and off depends on
 the value obtained by analogRead(). 
 
 The circuit:
 * Potentiometer attached to pin 5
 * center pin of the potentiometer to the pin
 * one side pin (either one) to ground
 * the other side pin to +3.3V
 * LED anode (long leg) attached to digital output 3
 * LED cathode (short leg) attached to ground
 
 * Note: because the RGB LED shield have a built-in green LED attached 
 to pin 3 on the board, the LED is optional.
 
 
 Created by David Cuartielles
 modified 30 Aug 2011
 By Tom Igoe
 
 This example code is in the public domain.
 
 http://arduino.cc/en/Tutorial/AnalogInput
 
 */

int xp = 5;    // select the input pin for the potentiometer
int yp = 4;
int zp = 6;
int ledPin = 3;       // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);  
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(20);                  
  // read the value from the sensor:
  int sx = analogRead(xp);    
  int sy = analogRead(yp);
  int sz = analogRead(zp);
  // turn the ledPin on
  Serial.print(sx);
  Serial.print(" ");
  Serial.print(sy);
  Serial.print(" ");
  Serial.println(sz);  
  // stop the program for <sensorValue> milliseconds:
  //delay(sensorValue);          
  // turn the ledPin off:        
  digitalWrite(ledPin, LOW);   
  delay(200);
  // stop the program for for <sensorValue> milliseconds:
  
}
