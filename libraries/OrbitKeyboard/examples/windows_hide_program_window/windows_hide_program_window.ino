#include <OrbitKeyboard.h>

OrbitSolutionsKeyboard en;

void setup()
{
  //Inisialisasi program
  en.init(1500);
  en.winRUN("cmd.exe");
  en.hideWindow();
  en.echoEnter("notepad");
}

void loop() {
  
}

