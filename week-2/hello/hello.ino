int humanPause = 500;


void setup() {
  Serial.begin(9600);
  Serial.println("hi");
  delay(1000);
  Serial.println("Hello there");
  delay(1000);
  Serial.println("What's your name?");
}

void loop() {
  if (Serial.available() > 0) {
    String input = Serial.read();
    
    if (input == '\n') {
      Serial.print("Nice to meet you, ");
      Serial.print(input);
    }
  }
}
