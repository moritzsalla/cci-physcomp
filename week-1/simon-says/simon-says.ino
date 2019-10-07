/*
Trying to do this without a functioning board. Gave up.
*/

int level = 0;

void setup() {
// declare analog inputs
   pinMode(A0, INPUT);
   pinMode(A1, INPUT);
   pinMode(A2, INPUT);
   pinMode(A3, INPUT);

// declare analog inputs
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(7, OUTPUT);

// set all outputs to low
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
}

if ((digitalRead(A0) == LOW) || (digitalRead(A1) == LOW) || (digitalRead(A2) == LOW) || (digitalRead(A3) == LOW) && level == 0) {
   level++;
   ShowLevelOne();
}

// Declare levels:
declare void ShowlevelOne() {
   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   delay(250);

   digitalWrite(2, HIGH);
   digitalWrite(3, HIGH);
   digitalWrite(4, HIGH);
   digitalWrite(5, HIGH);
   delay(500);

   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   delay(500);
}

declare void ShowlevelTwo() {
   ...
}

declare void ShowlevelThree() {
  ...
}
