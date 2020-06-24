#include <SPI.h>
#include "LedMatrix.h"


#define NUMBER_OF_DEVICES 4 //number of led matrix connect in series
#define CS_PIN 5
#define CLK_PIN 18
#define MISO_PIN 2 //we do not use this pin just fill to match constructor
#define MOSI_PIN 19

//LedMatrix ledMatrix = LedMatrix(NUMBER_OF_DEVICES, CLK_PIN, MISO_PIN, MOSI_PIN, CS_PIN);
LedMatrix ledMatrix = LedMatrix(NUMBER_OF_DEVICES, CLK_PIN, MISO_PIN, MOSI_PIN, CS_PIN, FONT_5x7);

void setup() {
  ledMatrix.init();
  ledMatrix.setText("Prova led a matrice");
}

void loop() {
  ledMatrix.clear();
  ledMatrix.scrollTextLeft();
  ledMatrix.drawText();
  ledMatrix.drawRectangle(3, 0, 6, 7);//rectangle (3,0)-(6,7)
  ledMatrix.drawLine(0, 0, 31, 7);//line (0,0)-(31,7)
  ledMatrix.commith();
  delay(50);
}
