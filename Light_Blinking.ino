// LED Blinking Example

int ledPin = 13; // built-in LED on most Arduino boards

void setup() {
  pinMode(ledPin, OUTPUT); // set pin 13 as output
}

void loop() {
  digitalWrite(ledPin, HIGH); // turn LED on
  delay(1000);                // wait 1 second
  digitalWrite(ledPin, LOW);  // turn LED off
  delay(1000);                // wait 1 second
}
