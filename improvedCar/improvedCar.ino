// shreyank and krutharth are working on this 

#include <AFMotor.h> // including the motor driver library

// seting up the motors
AF_DCMotor F_R_Motor(1);
AF_DCMotor F_L_Motor(2);
AF_DCMotor B_R_Motor(3);
AF_DCMotor B_L_Motor(4);

// initializing the default value for the bluetooth signal
int BT_Input = 10; 

void setup() {
  // setting up the baudrate for bluetooth module
  Serial.begin(38400);
  F_R_Motor.setSpeed(255);
  F_L_Motor.setSpeed(255);
  B_R_Motor.setSpeed(255);
  B_L_Motor.setSpeed(255);
}

void loop() {
  //reading the value from BT module
  while (Serial.available()==0){}
  BT_Input=Serial.read();

  if(BT_Input == 0){ 
    F_R_Motor.run(RELEASE);
    F_L_Motor.run(RELEASE);
    B_R_Motor.run(RELEASE);
    B_L_Motor.run(RELEASE);
    } 
    
  if(BT_Input == 1){  
    F_R_Motor.run(FORWARD);
    F_L_Motor.run(FORWARD);
    B_R_Motor.run(FORWARD);
    B_L_Motor.run(FORWARD);
    }
    
  if(BT_Input == 2){ 
    F_R_Motor.run(BACKWARD);
    F_L_Motor.run(BACKWARD);
    B_R_Motor.run(BACKWARD);
    B_L_Motor.run(BACKWARD);
    }
    
  if(BT_Input == 3){ 
    F_R_Motor.run(FORWARD);
    F_L_Motor.run(FORWARD);
    B_R_Motor.run(BACKWARD);
    B_L_Motor.run(BACKWARD);
    }
    
  if(BT_Input == 4){ 
    F_R_Motor.run(BACKWARD);
    F_L_Motor.run(BACKWARD);
    B_R_Motor.run(FORWARD);
    B_L_Motor.run(FORWARD);
    }
}
