const int buttonPin = 13; // GPIO13
const int ledPin = 2;     // Built-in LED

void setup() {
  Serial.begin(115200);
  pinMode(buttonPin, INPUT_PULLDOWN); // Use internal pull-down
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, LOW);
    
  } else {
    digitalWrite(ledPin, HIGH);
    Serial.println("Button Pressed!");
  }

  delay(50); // small debounce
}
