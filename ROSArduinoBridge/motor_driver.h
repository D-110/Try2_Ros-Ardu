/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

/*#ifdef L298_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD 5
  #define LEFT_MOTOR_BACKWARD  6
  #define RIGHT_MOTOR_FORWARD  9
  #define LEFT_MOTOR_FORWARD   10
  #define RIGHT_MOTOR_ENABLE 12
  #define LEFT_MOTOR_ENABLE 13
#endif

#ifdef DM860H_DRIVER                    //Modificar codigo
  #define RIGHT_MOTOR_BACKWARD 5
  #define LEFT_MOTOR_BACKWARD  6
  #define RIGHT_MOTOR_FORWARD  9
  #define LEFT_MOTOR_FORWARD   10
  #define RIGHT_MOTOR_ENABLE 12
  #define LEFT_MOTOR_ENABLE 13
#endif*/

#ifdef TB6560_DRIVER                    //Modificar codigo
  #define RIGHT_MOTOR_CW 5
  #define LEFT_MOTOR_CW  6
  #define RIGHT_MOTOR_PULSE  9
  #define LEFT_MOTOR_PULSE   10
#endif


//void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
