#define BLYNK_TEMPLATE_ID "TMPL3wOhdspCr"
#define BLYNK_TEMPLATE_NAME "LED"
#define BLYNK_AUTH_TOKEN "raDRCvytVJK2_a51mdOAwp0qjtQHedzc"

#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// WiFi credentials
char ssid[] = "wokwi-guest";
char pass[] = "";

// LED pin
int ledPin = 2;

// This function will be called every time the button widget in Blynk app is pressed
BLYNK_WRITE(V0) {
  int pinValue = param.asInt(); // Get value from Blynk (0 or 1)
 if (pinvalue ==1)
{
  digitalWrite(2, HIGH);
}
else
{
  digitalWrite(2, LOW);

}


  Blynk.run();
}
