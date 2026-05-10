const int led = 13;
const int button = 2;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP); // ça maintient la broche à l'état  (HIGH) par défaut + 0n connecte le bouton entre la broche et la masse (GND).
}

void loop() {

  int etat = digitalRead(2);
  if (etat == HIGH) {
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
  }
}




