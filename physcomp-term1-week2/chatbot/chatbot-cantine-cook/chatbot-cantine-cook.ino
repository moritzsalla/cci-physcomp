//simple chatbot isnpired by that miserable cantine lady here at uni
int sleep = 10000;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("good to have you at burger express, best burgers in town.");

  Serial.println(" ");
  convoOne();
  delay(sleep);

  Serial.println(" ");
  convoTwo();
  delay(sleep);

  Serial.println(" ");
  convoThree();
  delay(sleep);

  Serial.println(    "that'll be all. you look like a well done kinda person, didn't bother to ask. my collegue will shout your name once it's done. have a fabulous day.");
}

void convoOne() {
  Serial.println("how many pickles would you like on your burger?");

  if (Serial.available()) {
    int s = Serial.read();
    // print answer
    Serial.println(s);

    // do something
    if (s >= 3) {
      Serial.println("dude, we don't have buckets of those.");
    } else if (s < 3) {
      Serial.println("i'll put three. go gurkens or go home.");
    }
  }
}

void convoTwo() {
  Serial.println("how many patties?");

  if (Serial.available()) {
    int s = Serial.read();
    // print answer
    Serial.println(s);

    // do something
    if (s >= 1) {
      Serial.println("the one you chose only includes one");
    } else {
      Serial.println("itll clog your arteries nonetheless");
    }
  }
}

void convoThree() {
  Serial.println("how many slices of cheese?");

  if (Serial.available()) {
    int s = Serial.read();
    // print answer
    Serial.println(s);

    // do something
    if (s >= 1) {
      Serial.println("pay extra");
    } else {
      Serial.println("dry dry dry...");
    }
  }
}
