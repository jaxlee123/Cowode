#include "main.h"

//MOTOR
//(PORT,GEARSET MOTOR,forward with a positive charge=true)

//DRIVETRAIN
pros::Motor driveRightFront(12, pros::E_MOTOR_GEARSET_36,true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveLeftFront(14, pros::E_MOTOR_GEARSET_36,false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveRightBack(11, pros::E_MOTOR_GEARSET_36,true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveLeftBack(13, pros::E_MOTOR_GEARSET_36,false, pros::E_MOTOR_ENCODER_COUNTS);
//INTAKE
pros::Motor IntakeThing(16, pros::E_MOTOR_GEARSET_36,true, pros::E_MOTOR_ENCODER_COUNTS);
//LIFT
pros::Motor liftThingFront(15, pros::E_MOTOR_GEARSET_06,true, pros::E_MOTOR_ENCODER_COUNTS);
//pros::Motor liftThingLeft(19, pros::E_MOTOR_GEARSET_06,false, pros::E_MOTOR_ENCODER_DEGREES);
//LIFT BACK
pros::Motor liftThingBack(18, pros::E_MOTOR_GEARSET_06,true, pros::E_MOTOR_ENCODER_COUNTS);
//LIFT TOP
pros::Motor liftThingTop(17, pros::E_MOTOR_GEARSET_06,true, pros::E_MOTOR_ENCODER_COUNTS);
//CONTROLLER
pros::Controller controller(pros::E_CONTROLLER_MASTER);

//MISCELANIOUS for definitions
