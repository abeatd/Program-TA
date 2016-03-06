#include <stdlib.h>
#include "SoftwareSerial.h"
#define SSID ""
#define PASS ""
#define IP "184.106.153.149" // thingspeak.com
String apiKey = "";
String GET = "GET /update?key=[THINGSPEAK_KEY]&field1=";

const int sensorIn = A0;
int mVperAmp = 100;
double Voltage = 0;
double VRMS = 0;
double AmpsRMS = 0;
int ledPin = 13;

SoftwareSerial wifi(6,7);

void setup() 
{
 pinMode(ledPin, OUTPUT)
 wifi.begin(115200)
 Serial.begin(9600)
 wifi.println("AT+RST")
}

void loop() {
  digitalWrite(ledPin, HIGH);   
  delay(200);               
  digitalWrite(ledPin, LOW);


}
