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
  pinMode(12, OUTPUT);
  digitalWrite(12,HIGH);
}

void loop() {
  // reading the value from the joysticks
  joystick1Val = analogRead(joystick1);
  joystick2Val = analogRead(joystick2);

  // sending the approiate value as per the joystick
  if (joystick1Val > 900){
    Serial.write(1);
    delay(5);
  }
  else if (joystick1Val < 100){
    Serial.write(2);
    delay(5);
  }
  else if (joystick2Val < 100){
    Serial.write(3);
    delay(5);
  }
  else if (joystick2Val > 900){
    Serial.write(4);
    delay(5);
  }
  else{
    Serial.write(0);
    delay(5);
  }
}
