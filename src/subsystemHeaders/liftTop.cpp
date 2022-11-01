 #include "main.h"

 //HELPER FUNCTION
  void setLiftThingTop(int power){
    liftThingTop = power;
 }

  //DRIVER CONTROL FUNCTIONS
  void  setLiftThingTopMotors(){
    //LEFT TRIGGERS
    int jack = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);
  //___int_least16_t_defined  int jill = controller.get_analog(pros::E_CONTROLLER_);
   liftThingTop = 127 * (jack );
   // setLiftThingTop(liftThingTop);
  }
  //CHANGE TO JOYSTICK

//DEADZONE NOT DEADZONE
// if(setLiftThingLeft < 10)
// setLiftThingLeft = 0;
// if(setLiftThingRight < 10)
// leftJoystickUp = 0;
