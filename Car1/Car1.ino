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
  
}

void loop() {
  //reading the value from BT module
  BT_Input=Serial.read();

  if(BT_Input == 0){ Halt();} 
  if(BT_Input == 1){ Forward();}
  if(BT_Input == 2){ Backward();}
  if(BT_Input == 3){ Left();}
  if(BT_Input == 4){ Right();}
  
}
// to run the car forward
void Forward() {
  F_R_Motor.run(FORWARD);
  F_L_Motor.run(FORWARD);
  B_R_Motor.run(FORWARD);
  B_L_Motor.run(FORWARD);
}

// to run the car backward
void Backward() {
  F_R_Motor.run(BACKWARD);
  F_L_Motor.run(BACKWARD);
  B_R_Motor.run(BACKWARD);
  B_L_Motor.run(BACKWARD);
}

// to turn the car to the left
void Left() {
  F_R_Motor.run(FORWARD);
  F_L_Motor.run(FORWARD);
  B_R_Motor.run(BACKWARD);
  B_L_Motor.run(BACKWARD);
}


// to turn the car to the right
void Right() {
  F_R_Motor.run(BACKWARD);
  F_L_Motor.run(BACKWARD);
  B_R_Motor.run(FORWARD);
  B_L_Motor.run(FORWARD);
}

// to halt the car
void Halt() {
  F_R_Motor.run(RELEASE);
  F_L_Motor.run(RELEASE);
  B_R_Motor.run(RELEASE);
  B_L_Motor.run(RELEASE);
}
