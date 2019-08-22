#include <AFMotor.h> // including the motor driver library

// seting up the motors
AF_DCMotor F_R_Motor(1);
AF_DCMotor F_L_Motor(2);
AF_DCMotor B_R_Motor(3);
AF_DCMotor B_L_Motor(4);
void setup() {
  // put your setup code here, to run once:

}
void loop() {
  Halt(); 
  delay(5000);
  Forward();
  delay(5000);
  Backward();
  delay(5000);
  Left();
  delay(5000);
  Right();
  delay(5000);
  
}
// to run the car forward
void Forward() { 
  F_R_Motor.run(FORWARD);
  F_R_Motor.setSpeed(220);
  F_L_Motor.run(FORWARD);
  F_L_Motor.setSpeed(220);
  B_R_Motor.run(FORWARD);
  B_R_Motor.setSpeed(220);
  B_L_Motor.run(FORWARD);
  B_L_Motor.setSpeed(220);
}

// to run the car backward
void Backward() { 
  F_R_Motor.run(BACKWARD);
  F_R_Motor.setSpeed(225);
  F_L_Motor.run(BACKWARD);
  F_L_Motor.setSpeed(225);
  B_R_Motor.run(BACKWARD);
  B_R_Motor.setSpeed(225);
  B_L_Motor.run(BACKWARD);
  B_L_Motor.setSpeed(225);
}

// to turn the car to the left
void Left() {
  
  F_R_Motor.run(FORWARD);
  F_R_Motor.setSpeed(225);
  F_L_Motor.run(FORWARD);
  F_L_Motor.setSpeed(225);
  B_R_Motor.run(BACKWARD);
  B_R_Motor.setSpeed(225);
  B_L_Motor.run(BACKWARD);
  B_L_Motor.setSpeed(225);
}


// to turn the car to the right
void Right() {
  F_R_Motor.run(BACKWARD);
  F_R_Motor.setSpeed(225);
  F_L_Motor.run(BACKWARD);
  F_L_Motor.setSpeed(225);
  B_R_Motor.run(FORWARD);
  B_R_Motor.setSpeed(225);
  B_L_Motor.run(FORWARD);
  B_L_Motor.setSpeed(225);
}

// to halt the car
void Halt() {
  F_R_Motor.run(RELEASE);
  F_L_Motor.run(RELEASE);
  B_R_Motor.run(RELEASE);
  B_L_Motor.run(RELEASE);
}
