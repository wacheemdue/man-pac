#ifndef MANNY-PACMAN_H
#define MANNY-PACMAN_H

#include "Gadgetron.h"


#define DRIVE_STBY 4        
#define DRIVE_PWMA 3        
#define DRIVE_AIN1 6        
#define DRIVE_AIN2 8        
#define DRIVE_PWMB 5        
#define DRIVE_BIN1 9        
#define DRIVE_BIN2 10        
Motor drive(DRIVE_STBY,DRIVE_PWMA,DRIVE_AIN1,DRIVE_AIN2,DRIVE_PWMB,DRIVE_BIN1,DRIVE_BIN2);


#endif