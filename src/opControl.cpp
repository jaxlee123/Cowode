#include "main.h"

void opcontrol() {
 while(true) {
   //code to control the drive
   setDriveMotors();
   setLiftThingBackMotors();
   setLiftThingFrontMotors();
   setLiftThingTopMotors();
   setIntakeMotors();
   // setIntakeMotors();
   pros::delay(10);
    }
 }
