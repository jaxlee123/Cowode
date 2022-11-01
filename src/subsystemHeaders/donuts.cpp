#include "main.h"

//HELPER FUNCTION
   void setIntakeThing(int power){
     IntakeThing = power;
  }

 //DRIVER CONTROL FUNCTIONS
 void  setIntakeMotors(){
   //LEFT TRIGGERS
   int intakee = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_A) - controller.get_digital(pros::E_CONTROLLER_DIGITAL_B));
   setIntakeThing(intakee);
 }
 //A AND B AS THE BUTTONS
