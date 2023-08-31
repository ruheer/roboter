//hello world
int motorSpeed = 127;
// Rechter Motor
int enableRightMotor = 3;
int rightMotorPin1 = 8;
int rightMotorPin2 = 7;
// Linker Motor
int enableLeftMotor = 6;
int leftMotorPin1 = 4;
int leftMotorPin2 = 5;

//Sensoren
const int SensorWhite = A0; // Schwarz/Weiss Sensor

void setup() {
  // rechter Motor
  pinMode(enableRightMotor, OUTPUT);
  pinMode(rightMotorPin1, OUTPUT);
  pinMode(rightMotorPin2, OUTPUT);
  // Linker Motor
  pinMode(enableLeftMotor, OUTPUT);
  pinMode(leftMotorPin1, OUTPUT);
  pinMode(leftMotorPin2, OUTPUT);
  //Speed
  analogWrite(enableRightMotor, motorSpeed);
  analogWrite(enableLeftMotor, motorSpeed);

}

void loop() {
  foward();
  delay(1000);
  backward();
  delay(1000);
  if (analogRead(SensorWhite) < 988) { // Fix Me
    right();
  }
}
void foward() {
  analogWrite(enableRightMotor, motorSpeed);
  digitalWrite(rightMotorPin1, HIGH);
  digitalWrite(rightMotorPin2, LOW);

  analogWrite(enableLeftMotor, motorSpeed);
  digitalWrite(leftMotorPin1, HIGH);
  digitalWrite(leftMotorPin2, LOW);

}
void backward(){
digitalWrite(rightMotorPin1, LOW);
digitalWrite(rightMotorPin2, HIGH);
analogWrite(enableRightMotor, motorSpeed);

digitalWrite(leftMotorPin1, LOW);
digitalWrite(leftMotorPin1, LOW);
analogWrite(enableLeftMotor, motorSpeed);
}
void right() {
  analogWrite(enableRightMotor, motorSpeed);
  digitalWrite(rightMotorPin1, HIGH);
  digitalWrite(rightMotorPin2, LOW);

  analogWrite(enableLeftMotor, motorSpeed);
  digitalWrite(leftMotorPin1, LOW);
  digitalWrite(leftMotorPin2, HIGH);

}
