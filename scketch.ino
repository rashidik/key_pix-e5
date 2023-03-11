#include "Keyboard.h"
#define KEY_LEFT_CTRL  0x80


int buttonPin1 = 3;  // Set for rec button
int buttonPin2 = 4;  // Set for stop button

void setup()
{
  pinMode(buttonPin1, INPUT);  // Set the button as an input
  digitalWrite(buttonPin1, HIGH);  // Pull the button high
  pinMode(buttonPin2, INPUT);  
  digitalWrite(buttonPin2, HIGH);
}

void loop()
{
  if (digitalRead(buttonPin1) == 0)  
  {
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(82);
  Keyboard.releaseAll();
  delay(500);
  }
  if (digitalRead(buttonPin2) == 0)  
  {
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(83);
  Keyboard.releaseAll();
  delay(500);
  }
}
