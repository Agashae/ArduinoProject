#include <Servo.h> //  importe la bibliothèque Servo, qui contient toutes les fonctions

Servo myservo; // crée un objet "myservo" de type Servo.

int pos = 0; // Variable qui stocke l'angle actuel du servomoteur (en degrés).  entre 0 et 180 
void setup() {

  myservo.attach(8); // On indique que le servomoteur est branché sur la broche numérique 8.
}

void loop() {


  for (pos = 0; pos <= 180; pos += 1) { // Boucle qui fait avancer pos de 0° à 180°, un degré à la fois.

    myservo.write(pos); // On envoie l'ordre au servomoteur d'aller à l'angle "pos".
  

    delay(15); // On attend 15 millisecondes avant de passer au degré suivant.
    // Cela laisse le temps au servo d'atteindre la position demandée.
    // Sans ce délai, les ordres s'enchaîneraient trop vite et le servo ne pourrait pas suivre.
  }

  for (pos = 180; pos >= 0; pos -= 1) {
    // C'est la phase retour qui tourne vers la gauche.

    myservo.write(pos);
    // Même principe qu'avant : on envoie la nouvelle position au servo.

    delay(15);
    // On attend à nouveau 15ms pour que le servo puisse suivre le mouvement.
  }
