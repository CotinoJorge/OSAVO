#include <Arduino.h>
#include <SPI.h>
#include <U8g2lib.h>

U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_MIRROR, /* reset=*/U8X8_PIN_NONE);

void setup(void) {
  u8g2.begin();
}

void loop(void) {
  u8g2.firstPage();
  do {
    u8g2.drawBox(61, 0, 6, 64);
    u8g2.drawBox(0, 29, 128, 6);
    u8g2.drawCircle(64, 32, 10, U8G2_DRAW_ALL);
  } while (u8g2.nextPage());
  delay(1000);
}
