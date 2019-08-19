// setting up the joysticks
int joystick1=A0;
int joystick2=A1;

// variables tostoret the value of the joysticks
int joystick1Val;
int joystick2Val;

int  rtate;

void setup() {
  // setting baudrate for BT module
  Serial.begin(38400);
  
  // intilising the joysticks
  pinMode(joystick1, INPUT);
  pinMode(joystick2, INPUT);
}

void loop() {
  // reading the value from the joysticks
  joystick1Val = analogRead(joystick1);
  joystick2Val = analogRead(joystick2);

  // sending the approiate value as per the joystick
  if (joystick1Val > 700){
    //Serial.write(1);
    rtate = 1;
  }
  else if (joystick1Val < 300){
   // Serial.write(2);
    rtate = 2;
  }
  else if (joystick2Val < 300){
    //Serial.write(3);
    
    rtate = 1;
  }
  else if (joystick2Val > 700){
    //Serial.write(4);
    
    rtate = 1;
  }
  else{
    //Serial.write(0);
    rtate = 0;
  }
  Serial.write(rtate);
}
