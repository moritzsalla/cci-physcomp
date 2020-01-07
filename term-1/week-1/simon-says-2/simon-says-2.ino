int white = 7;
int red = 6;
int green = 5;

int buttonOne = 9;
int buttonTwo = 10;
int buttonThree = 11;

void setup() {
  Serial.begin(9600);

  pinMode(white, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);

  pinMode(buttonOne, INPUT_PULLUP);
  pinMode(buttonTwo, INPUT_PULLUP);
  pinMode(buttonThree, INPUT_PULLUP);

}

void loop () {
  int sensorValue = digitalRead(buttonOne);
  Serial.println(sensorValue);
  delay(1);

  if (sensorValue == 0) {
    seqOne();
  } else {
    digitalWrite(white, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
  }

}

void seqOne() {
  digitalWrite(white, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  delay(500);

  digitalWrite(white, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  delay(500);

  digitalWrite(white, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  delay(500);
}
