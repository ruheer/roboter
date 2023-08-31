// Geschwindigkeit der Motoren (0..255)
int motorSpeed = 100;
// Rechter Motor
int enableRightMotor = 3;
int rightMotorPin1 = 8;
int rightMotorPin2 = 7;
void setup()
{

pinMode(enableRightMotor, OUTPUT);
pinMode(rightMotorPin1, OUTPUT);
pinMode(rightMotorPin2, OUTPUT);
analogWrite(enableRightMotor, motorSpeed);
}
void forward(int speed){
digitalWrite(rightMotorPin1, HIGH);
digitalWrite(rightMotorPin2, LOW);
analogWrite(enableRightMotor, speed);
}
void backward(int speed){
digitalWrite(rightMotorPin1, LOW);
digitalWrite(rightMotorPin2, HIGH);
analogWrite(enableRightMotor, speed);
}
void loop() {
forward(255);
delay(2000);
backward(128);
delay(2000);
}
