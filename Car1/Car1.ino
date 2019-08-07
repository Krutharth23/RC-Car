#include <AFMotor.h> // including the motor driver library

// seting up the motors
AF_DCMotor F_R_Motor(1);
AF_DCMotor F_L_Motor(2);
AF_DCMotor B_R_Motor(3);
AF_DCMotor B_L_Motor(4);

void setup() {
  Serial.begin(38400); // setting up the baudrate for bluetooth modlue
}

void loop() {
  

}

// to run the car forward
void forward() {
  F_R_Motor.run(FORWARD);
  F_L_Motor.run(FORWARD);
  B_R_Motor.run(FORWARD);
  B_L_Motor.run(FORWARD);
}

// to run the car backward
void backward() {
  F_R_Motor.run(BACKWARD);
  F_L_Motor.run(BACKWARD);
  B_R_Motor.run(BACKWARD);
  B_L_Motor.run(BACKWARD);
}

// to turn the car to the left
void left() {
  F_R_Motor.run(FORWARD);
  F_L_Motor.run(FORWARD);
  B_R_Motor.run(BACKWARD);
  B_L_Motor.run(BACKWARD);
}


// to turn the car to the right
void right() {
  F_R_Motor.run(BACKWARD);
  F_L_Motor.run(BACKWARD);
  B_R_Motor.run(FORWARD);
  B_L_Motor.run(FORWARD);
}

// to halt the car
void Stop() {
  F_R_Motor.run(RELEASE);
  F_L_Motor.run(RELEASE);
  B_R_Motor.run(RELEASE);
  B_L_Motor.run(RELEASE);
}
