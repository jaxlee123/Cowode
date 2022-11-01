#include "main.h"

//HELPER FUNCTIONS
void setDrive(int left, int right){
  //ARCADE DRIVE LEEFT JOYSTICK
  driveLeftFront = left;
  driveLeftBack = left;
  driveRightFront = right;
  driveRightBack = right;
}

void resetDriveEncoders(){
    driveLeftFront.tare_position();

    driveRightFront.tare_position();
}
double averageDriveEncoderValue(){
     return ( fabs(driveLeftFront.get_position())+
               fabs(driveLeftBack.get_position())+
         fabs(driveRightFront.get_position())+
         fabs(driveRightBack .get_position())) / 4;
}

//DRIVER CONTROL FUNCTIONS
  void setDriveMotors() {
  int power = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
  int turn = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_X);

  int left= power+turn;
  int right = power-turn;
  setDrive (left, right);
}

//AUTONOMOUS FUNCTIONS
void translate(int units, int voltage){
 // define a direction based on units provided

  int direction = abs(units / units);
  //reset motor encoders
  resetDriveEncoders();
  //drive forward until units are reached
  while(averageDriveEncoderValue() < abs(units)){
    setDrive(voltage,voltage);
    pros::delay(10);
    }
  //brief brake
  setDrive(-10*direction, -10*direction );
  pros::delay(50);
  //set drive back to nuteral
  setDrive(0,0);
}
