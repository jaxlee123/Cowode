#include "main.h"

 //HELPER FUNCTION
  void setLiftThingBack(int power){
    liftThingBack = power;
}

  //DRIVER CONTROL FUNCTIONS
  void  setLiftThingBackMotors(){
    // //RIGHT TRIGGERS
    //  liftThingBack = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1) - controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2));
    //  // setLiftThingBack(liftThingBack);
    liftThingBack = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1)-(controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2)));
 }


//DEADZONE NOT DEADZONE
// if(setLiftThingLeft < 10)
// setLiftThingLeft = 0;
// if(setLiftThingRight < 10)
// leftJoystickUp = 0;
