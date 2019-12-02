#include <Servo.h>
#include "Manny-Pacman.h"

const int MOVING = 0;
const int TURNING = 1;

const int TIME_MOVE = 2000;
const int TIME_TURN = 500;

int state;

void setup()
{
  Serial.begin(9600);
  drive.setup();

  state = MOVING;
  
}

void loop()
{

  switch(state) {
    case TURNING:
      delay(TIME_TURN);
      state = MOVING;
      break;

    case MOVING:
      delay(TIME_MOVE);
      state = TURNING;
      break;

  }
  
  switch(state) {
    case TURNING:
      drive.spinLeft(100);
      break;

    case MOVING:
      drive.forward(100);
      break;
  }
        
}
