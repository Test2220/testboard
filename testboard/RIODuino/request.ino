#include <Wire.h>
#include <Adafruit_GFX.h> // Core graphics library 
#include <Adafruit_TFTLCD.h> // Hardware-specific library 
#include <TouchScreen.h>

// The control pins for the LCD can be assigned to any digital or
// analog pins...but we'll use the analog pins as this allows us to
// double up the pins with the touch screen (see the TFT paint example). 
#define LCD_CS A3 // Chip Select goes to Analog 3
#define LCD_CD A2 // Command/Data goes to Analog 2
#define LCD_WR A1 // LCD Write goes to Analog 1
#define LCD_RD A0 // LCD Read goes to Analog 0

#define LCD_RESET A4 // Can alternately just connect to Arduino's reset pin

// When using the BREAKOUT BOARD only, use these 8 data lines to the LCD:
// For the Arduino Uno, Duemilanove, Diecimila, etc.:
// D0 connects to digital pin 8
// D1 connects to digital pin 9
// D2 connects to digital pin 2
// D3 connects to digital pin 3
// D4 connects to digital pin 4
// D5 connects to digital pin 5
// D6 connects to digital pin 6
// D7 connects to digital pin 7
// For the Arduino Mega, use digital pins 22 through 29
// (on the 2-row header at the end of the board).

// Assign human-readable names to some common 16-bit color values: #define BLACK 0x0000
#define BLUE 0x001F
#define RED 0xF800 
#define GREEN 0x07E0 
#define CYAN 0x07FF 
#define MAGENTA 0xF81F 
#define YELLOW 0xFFE0 
#define WHITE 0xFFFF

#define BUTTON_X 40
#define BUTTON_Y 100
#define BUTTON_W 60
#define BUTTON_H 30 
#define BUTTON_SPACING_X 20 
#define BUTTON_SPACING_Y 20 
#define BUTTON_TEXTSIZE 2

int deviceCount = 3

byte devStats[deviceCount] = {}

void setup() {
    Serial.begin(9600)
    Wire.begin(4)
    Wire.onRequest(requestHandler)
}

void loop() {
    
}

void requestHandler() {
    Wire.write(devStats)
}
