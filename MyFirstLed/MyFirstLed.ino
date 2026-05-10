const int led = 13; // créer la variable

void setup() {
  pinMode (led, OUTPUT); // initer la sortie

}

void loop() { 
digitalWrite (led, HIGH); // 1 marche aussi 
delay (100);
digitalWrite (led, LOW); // 0 marche aussi 
delay (100);
}
