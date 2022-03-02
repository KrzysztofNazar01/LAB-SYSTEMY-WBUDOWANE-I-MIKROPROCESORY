const int LED_PIN_RED=  12;   // the number of the LED pin
const int LED_PIN_GREEN =  11;   // the number of the LED pin
const int LED_PIN_BLUE =  10;   // the number of the LED pin
const int LED_PIN_YELLOW =  9;   // the number of the LED pin
const int LED_PIN_RGB_R =  8;   // the number of the LED pin
const int LED_PIN_RGB_G =  7;   // the number of the LED pin
const int LED_PIN_RGB_B =  6;   // the number of the LED pin

const int BUTTON_PIN1 = 1;  // the number of the pushbutton pin
const int BUTTON_PIN2 = 2;  // the number of the pushbutton pin
const int BUTTON_PIN3 = 3;  // the number of the pushbutton pin
const int BUTTON_PIN4 = 4;  // the number of the pushbutton pin
const int BUTTON_PIN5 = 5;  // the number of the pushbutton pin

// variables will change:
int buttonState1 = 0;   // variable for reading the pushbutton status
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;


int ledState = LOW; 
int lastState;
int currentState;

int RGB = 0;
void setup() {
  // initialize the LED pin as an output:
  for(int i=6;i<13;i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);  
  }

  // initialize the pushbutton pin as an pull-up input:
  // the pull-up input pin will be HIGH when the switch is open and LOW when the switch is closed.

  for(int i=1;i<6;i++)
  {
     pinMode(i, INPUT_PULLUP);
  }
 
}

void loop() {

  //buttonState1 = digitalRead(BUTTON_PIN1);
  buttonState2 = digitalRead(BUTTON_PIN2);
  buttonState3 = digitalRead(BUTTON_PIN3);
  buttonState4 = digitalRead(BUTTON_PIN4);
  buttonState5 = digitalRead(BUTTON_PIN5);
  
    if(buttonState4 == HIGH)         
      digitalWrite(LED_PIN_GREEN, HIGH); 
    else                           
      digitalWrite(LED_PIN_GREEN, LOW);

    if(buttonState3 == HIGH)         
      digitalWrite(LED_PIN_BLUE, HIGH); 
    else                           
      digitalWrite(LED_PIN_BLUE, LOW);

    if(buttonState2 == HIGH)         
      digitalWrite(LED_PIN_YELLOW, HIGH); 
    else                           
      digitalWrite(LED_PIN_YELLOW, LOW);


    lastState   = currentState;      // save the last state
    currentState = digitalRead(BUTTON_PIN1); // read new state

  if(lastState == HIGH && currentState == LOW) {
    ledState = !ledState;

    digitalWrite(LED_PIN_RED, ledState);
  }

    //RGB

      buttonState5 = digitalRead(BUTTON_PIN5);
    if(buttonState5 == LOW) 
    {        
      RGB++;
      delay(200);
    }
    
    switch (RGB%8) {
      case 0:
        digitalWrite(LED_PIN_RGB_R, LOW); 
        digitalWrite(LED_PIN_RGB_G, LOW); 
        digitalWrite(LED_PIN_RGB_B, LOW); 
      break;    
      case 1:
         digitalWrite(LED_PIN_RGB_R, LOW); 
         digitalWrite(LED_PIN_RGB_G, LOW); 
         digitalWrite(LED_PIN_RGB_B, HIGH); 
      break;    
      case 2:
         digitalWrite(LED_PIN_RGB_R, LOW); 
         digitalWrite(LED_PIN_RGB_G, HIGH); 
         digitalWrite(LED_PIN_RGB_B, LOW); 
      break;   
      case 3:
         digitalWrite(LED_PIN_RGB_R, LOW); 
         digitalWrite(LED_PIN_RGB_G, HIGH); 
         digitalWrite(LED_PIN_RGB_B, HIGH); 
      break;  
      case 4:
         digitalWrite(LED_PIN_RGB_R, HIGH); 
         digitalWrite(LED_PIN_RGB_G, LOW); 
         digitalWrite(LED_PIN_RGB_B, LOW); 
      break;
      case 5:
         digitalWrite(LED_PIN_RGB_R, HIGH); 
         digitalWrite(LED_PIN_RGB_G, LOW); 
         digitalWrite(LED_PIN_RGB_B, HIGH); 
      break;
      case 6:
         digitalWrite(LED_PIN_RGB_R, HIGH); 
         digitalWrite(LED_PIN_RGB_G, HIGH); 
         digitalWrite(LED_PIN_RGB_B, LOW); 
      break;
      case 7:
         digitalWrite(LED_PIN_RGB_R, HIGH); 
         digitalWrite(LED_PIN_RGB_G, HIGH); 
         digitalWrite(LED_PIN_RGB_B, HIGH); 
      break;
}
      

  
}
