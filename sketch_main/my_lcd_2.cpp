#include <LiquidCrystal.h>
#include "DFRkeypad.h"

enum ePins { LCD_RS=8, LCD_EN=9, LCD_D4=4, LCD_D5=5, LCD_D6=6, LCD_D7=7, LCD_BL=10 }; // define LCD pins
LiquidCrystal lcd(LCD_RS, LCD_EN, LCD_D4, LCD_D5, LCD_D6, LCD_D7); // initialize the library with the numbers of the interface pins

// blink LED task
void drive_lcd(void *parameter) 
{

  //print a # to the screen
  lcd.print("#");
  
}