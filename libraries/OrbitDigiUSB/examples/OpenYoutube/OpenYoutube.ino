/*
 * Generated with <3 by Dckuino.js, an open source project !
 */

#include <avr/pgmspace.h>
#include "DigiKeyboard.h"
const char line1[] PROGMEM = "https://www.youtube.com/watch?v=ZR9yQti8Cls";
const char line2[] PROGMEM = "f";

char buffer[256];

#define GetPsz(x) (strncpy_P(buffer, (char*)x, 256))
#define KEY_UP_ARROW		0x52
#define KEY_DOWN_ARROW	0x51
#define KEY_LEFT_ARROW		0x50
#define KEY_RIGHT_ARROW		0x4F
#define KEY_LEFT_GUI			0xE3
#define KEY_ESC				0x29
#define KEY_TAB				0x2B

void digiBegin() {
  DigiKeyboard.sendKeyStroke(0,0);
  DigiKeyboard.delay(50);
}

void digiEnd() {
  const int led=1;
  pinMode(led, OUTPUT);
  while (1) {
    digitalWrite(led, !digitalRead(led));
    DigiKeyboard.delay(1000);
  }
}

void printText(char *txt) {
  DigiKeyboard.print(txt);
  DigiKeyboard.update();
}

void setup() {
  digiBegin();

  DigiKeyboard.delay(3000);

  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);

  DigiKeyboard.delay(200);

  // https://www.youtube.com/watch?v=ZR9yQti8Cls
  printText(GetPsz(line1));

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(3000);

  // f
  printText(GetPsz(line2));

  digiEnd();

}
/* Unused endless loop */
void loop() {}