#include <Keyboard.h>
#include <KeyboardLayout.h>
#include <Keyboard_da_DK.h>
#include <Keyboard_de_DE.h>
#include <Keyboard_es_ES.h>
#include <Keyboard_fr_FR.h>
#include <Keyboard_hu_HU.h>
#include <Keyboard_it_IT.h>
#include <Keyboard_pt_PT.h>
#include <Keyboard_sv_SE.h>

#define btnRIGHT  0
#define btnUP     1
#define btnDOWN   2
#define btnLEFT   3
#define btnSELECT 4
#define btnNONE   5

const int buttonPin = 7;
char rightKey = KEY_RIGHT_ARROW;
char enterKey = KEY_RETURN;
char downKey = KEY_DOWN_ARROW;
char tabKey = KEY_TAB;

int buttonState = 0;
int read_LCD_buttons()
{
 int adc_key_in = analogRead(0);      // read the value from the sensor 
 // my buttons when read are centered at these values: 0, 144, 329, 1004, 741
 // we add approx 100 to those values and check to see if we are close
 if (adc_key_in > 1000) return btnNONE; // We make this the 1st option for speed reasons since it will be the most likely result
 if (adc_key_in < 100)   return btnRIGHT;  
 if (adc_key_in < 195)  return btnUP; 
 if (adc_key_in < 380)  return btnDOWN; 
 if (adc_key_in < 555)  return btnLEFT; 
 if (adc_key_in < 790)  return btnSELECT;   
 return btnNONE;  // when all others fail, return this...
}


void setup() {
  Keyboard.begin();
}

void loop() {
  buttonState = read_LCD_buttons();
  if (buttonState == btnSELECT){
      //START
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(enterKey);
      delay(1500);
      // REVIEW
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(enterKey);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(enterKey);
      delay(1000);
      //WIFI
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(enterKey);
      delay(100);
      Keyboard.write(enterKey);
      delay(1000);
      //date + time
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(enterKey);
      delay(2000);
      //GOOGLE SERVICES
      Keyboard.write(tabKey); 
      delay(300);
      Keyboard.write(tabKey); 
      delay(250);
      Keyboard.write(tabKey); 
      delay(500);
      Keyboard.write(downKey);
      delay(500);
      Keyboard.write(downKey);
      delay(500);
      Keyboard.write(downKey);
      delay(500);
      Keyboard.write(downKey);
      delay(500);
      Keyboard.write(downKey);
      delay(500);
      Keyboard.write(downKey);
      delay(500);
      Keyboard.write(downKey);
      delay(500);
      Keyboard.write(enterKey);
      delay(1000);
      //PROTECT
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(enterKey);
      delay(100);
      Keyboard.write(enterKey);
      delay(8000);
      //Recommended apps
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(enterKey);
      delay(1000);
      //Samsung Account
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(enterKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(rightKey);
      delay(100);
      Keyboard.write(enterKey);
      delay(1000);
      //Samsung Services
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(enterKey);
      delay(1000);
      //display preference
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(downKey);
      delay(100);;
      Keyboard.write(downKey);
      delay(100);
      Keyboard.write(enterKey);
      delay(1000);
      //finished
      Keyboard.press(downKey);
      delay(100);
      Keyboard.write(enterKey);
      delay(1000);
      }

}