#define BUZZER_PIN 27  // Change to the pin where your buzzer is connected

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);

      
}

void loop() {
  tone(BUZZER_PIN, 520); // 1000 Hz frequency
  delay(1000);             // Buzz duration: 1 second
  noTone(BUZZER_PIN); 
      
}
