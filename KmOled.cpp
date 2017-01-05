//*******1*********2*********3*********4*********4*********5*********6*********7*********8
#include <ESP_SSD1306.h>
#include <Adafruit_GFX.h>

#include <SPI.h>
#include <Wire.h>

#include "KmOled.h"

//Pin Definition
//D5 CLOCK to D0  on OLED
//D7 MOSI  to D1  on OLED
#define OLED_RESET  D0
#define OLED_DC     D4
#define OLED_CS     D8

ESP_SSD1306 Disp(OLED_DC, OLED_RESET, OLED_CS); // FOR SPI

KmOled::KmOled(int debug){
  Debug=debug;
}

void KmOled::begin(){

  Disp.begin(SSD1306_SWITCHCAPVCC); Disp.display();
  delay(1000);
  Disp.clearDisplay(); Disp.display();

}

//#####
//#####
void KmOled::writeText(String txt, int sz, int x, int y){

  Disp.clearDisplay();

  Disp.setTextSize(sz); Disp.setCursor(x, y); Disp.setTextColor(WHITE);
  Disp.println(txt);

  Disp.display();

}

//#####
//#####
void KmOled::clear(){

  Disp.clearDisplay(); Disp.display();

}
