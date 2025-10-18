int sensorPin = 34;     // Finger pulse sensor
int ledPin = 2;         // Optional LED

float alpha = 0.6;      // smoothing factor
float smoothedValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int rawValue = analogRead(sensorPin);

  // Smooth the signal (EMA)
  smoothedValue = alpha * smoothedValue + (1 - alpha) * rawValue;

  // Blink LED if rawValue is high (just for testing)
  if (rawValue > 2000) { // arbitrary test threshold
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  // Print raw and smoothed values
  Serial.print("Raw: ");
  Serial.print(rawValue);
  Serial.print("\tSmoothed: ");
  Serial.println(smoothedValue);

  delay(10); // 100 Hz sampling
}
