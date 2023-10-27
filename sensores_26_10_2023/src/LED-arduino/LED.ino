#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUMPIXELS 16

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
}

int i = 0;
void loop() {
  pixels.clear();
  pixels.setPixelColor(i, pixels.Color(255, 0, 0));
  pixels.show();
  i = (i + 1) % NUMPIXELS;
   
  delay(200);
}
