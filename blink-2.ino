
#define BUTTON_PIN  18 // ESP32 pin 18
#define LED_PIN     21 // ESP32 21


int button_state = 0;

void setup() {
  
  pinMode(LED_PIN, OUTPUT);

  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {

  button_state = digitalRead(BUTTON_PIN);


  if (button_state == LOW)      
    digitalWrite(LED_PIN, HIGH); 
  else                         
    digitalWrite(LED_PIN, LOW); 
}
