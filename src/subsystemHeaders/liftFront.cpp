#include "main.h"

 //HELPER FUNCTION
  void setLiftThingFront(int power){
    liftThingFront = power;
}

  //DRIVER CONTROL FUNCTIONS
  void  setLiftThingFrontMotors(){
    liftThingFront = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1)-(controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2)));
   // setLiftThingFront(liftThingFront);
 }
//SWITCH TO L1 L2



//DEADZONE NOT DEADZONE
// if(setLiftThingLeft < 10)
// setLiftThingLeft = 0;
// if(setLiftThingRight < 10)
// leftJoystickUp = 0;
