#include <OrbitKeyboard.h>

OrbitSolutionsKeyboard en;

void setup()
{
  //Inisialisasi program
  en.init(1500);
  en.winRUN("cmd.exe");
  en.writeOnBackground("ping google.com");
  en.minimizeWindow();
}

void loop() {
  
}

