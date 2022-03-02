const int BUTTON_PIN = 5;  // the number of the pushbutton pin
const int LED_PIN_RED=  12;   // the number of the LED pin
const int LED_PIN_GREEN =  11;   // the number of the LED pin
const int LED_PIN_BLUE =  10;   // the number of the LED pin
const int LED_PIN_YELLOW =  9;   // the number of the LED pin
const int LED_PIN_RGB_R =  8;   // the number of the LED pin
const int LED_PIN_RGB_G =  7;   // the number of the LED pin
const int LED_PIN_RGB_B =  6;   // the number of the LED pin

// variables will change:
int buttonState = 0;   // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  for(int i=6;i<13;i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);  
  }

  // initialize the pushbutton pin as an pull-up input:
  // the pull-up input pin will be HIGH when the switch is open and LOW when the switch is closed.
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  for(int i=6;i<13;i++)
  {
    digitalWrite(i, HIGH);  
    delay(500); // delay time in milliseconds  
    digitalWrite(i, LOW);  
    delay(500);
  }
}
