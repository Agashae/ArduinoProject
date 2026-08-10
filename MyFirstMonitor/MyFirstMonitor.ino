// packet 
#include <Adafruit_SSD1306.h> 

// créer écran avec taille, &Wir communiquer via les broches I2C et -1 pour "Aucun", dire à l'Arduino que l'écran n'a pas de fil de RESET
Adafruit_SSD1306 ecran(128, 64, &Wire, -1); 

void setup() {
  // allumer écran électrique via 0x3C
  ecran.begin(SSD1306_SWITCHCAPVCC, 0x3C); 
  
  //vider l'écran et partir sur une page noire propre
  ecran.clearDisplay();     
  
  //couleur du texte (le chiffre 1 signifie "allumer la lumière des pixels")
  ecran.setTextColor(1);    
  
  // taille des lettres
  ecran.setTextSize(2);     
  
  // comme en C#
  ecran.setCursor(10, 20);  
  
  // notre message
  ecran.print("Bonjour ! Agashae"); 
  
  //IMPORTANT : On appuie sur le bouton "Afficher" pour envoyer le mot sur l'écran en verre
  ecran.display();          
}

void loop() {
  // On laisse cette zone totalement vide car notre texte n'a pas besoin de bouger
}

// Aide de Gemini