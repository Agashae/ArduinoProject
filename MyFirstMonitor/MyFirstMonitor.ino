// packet 
#include <Adafruit_SSD1306.h> 


// créer écran avec taille, &Wir communiquer via les broches I2C et -1 pour "Aucun", dire à l'Arduino que l'écran n'a pas de fil de RESET
Adafruit_SSD1306 ecran(128, 64, &Wire, -1); 

void setup() {
  ecran.begin(SSD1306_SWITCHCAPVCC, 0x3C); // démarre l'écran (adresse I2C 0x3C)

  ecran.clearDisplay();        // on efface l'écran
  ecran.setTextColor(1);       // 1 = texte allumé (blanc/bleu selon l'écran)
  ecran.setTextSize(2);        // taille du texte
  ecran.setCursor(10, 20);     // position où le texte commence
  ecran.print("Bonjour ! Agashae");

  ecran.display();             // affiche tout ce qu'on vient de préparer
}

void loop() {
  // rien à faire ici, le texte reste affiché en continu
}

// Aide de l'IA pour la compréhension