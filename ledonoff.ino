#define BLYNK_TEMPLATE_ID "TMPLgcEHWbHG"
#define BLYNK_TEMPLATE_NAME "led on off"
#define BLYNK_AUTH_TOKEN "P8Yk732vI1oQ9Kp64np__Zp_ozio4AoP"
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h> 
 
#include <BlynkSimpleEsp8266.h>
 

char auth[] = "P8Yk732vI1oQ9Kp64np__Zp_ozio4AoP";

char ssid[] = "POCOX2";  // type your wifi name
char pass[] = "25802580";  // type your wifi password

int relaypin = D4;
void setup()
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    
  pinMode(relaypin,OUTPUT);
 
  }

void loop()
{
  Blynk.run(); 
 }