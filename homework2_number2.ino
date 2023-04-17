#include <Arduino.h>
#include <TM1637Display.h>

// Module connection pins (Digital Pins)
#define CLK 2
#define DIO 3

// The amount of time (in milliseconds) between tests
#define TEST_DELAY   2000

const uint8_t SEG_DONE[] = {
  SEG_B | SEG_C | SEG_D | SEG_E | SEG_G,           // d
  SEG_A | SEG_B | SEG_C | SEG_D | SEG_E | SEG_F,   // O
  SEG_C | SEG_E | SEG_G,                           // n
  SEG_A | SEG_D | SEG_E | SEG_F | SEG_G            // E
  };

TM1637Display display(CLK, DIO);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  int k;
  uint8_t data[] = { 0xff, 0xff, 0xff, 0xff };
  uint8_t blank[] = { 0x00, 0x00, 0x00, 0x00 };
  display.setBrightness(0x0f);

  // All segments on
  display.setSegments(data);
  delay(TEST_DELAY);
  unsigned int minute = 0;

  while (minute<1100) {
    // put your main code here, to run repeatedly:
    for (int second=0; second<60; second++){
      int timeon = minute + second;
      display.showNumberDec(timeon,true);
      delay(1000);
      unsigned long 61real_time = millis();
      Serial.println(real_time);
      }
    minute = minute + 100;
  }
}
