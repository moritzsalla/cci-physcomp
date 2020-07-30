
int potPin = 7;
int ledPin = 9;
int val = 0;
int valMapped = 0;

void setup() {
  pinMode(ledPin, OUTPUT);  // declare the ledPin as an OUTPUT
  Serial.begin(9600);
}

void loop() {
  val = analogRead(potPin);

  valMapped = map(val, 150, 600, 0, 255);
  
  Serial.println(val);
  analogWrite(ledPin, valMapped);
}
