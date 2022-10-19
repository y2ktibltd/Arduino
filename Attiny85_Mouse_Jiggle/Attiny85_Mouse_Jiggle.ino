#include <DigiMouse.h>

void setup() {
  DigiMouse.begin(); //start or reenumerate USB - BREAKING CHANGE from old versions that didn't require this
}

void update(){
  DigiMouse.update();
  DigiMouse.delay(125);
}


void loop() {
  int mv=3;
  DigiMouse.moveY(mv);
  update();
  DigiMouse.moveX(mv);
  update();
  DigiMouse.moveY(-mv);
  update();
  DigiMouse.moveX(-mv);
  update();
}
