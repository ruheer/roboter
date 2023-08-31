int motorSpeed = 127;
// Rechter Motor
int enableRightMotor = 3;
int rightMotorPin1 = 8;
int rightMotorPin2 = 7;
// Linker Motor
int enableLeftMotor = 6;
int leftMotorPin1 = 4;
int leftMotorPin2 = 5;
void setup()
{
pinMode(enableRightMotor, OUTPUT);
pinMode(rightMotorPin1, OUTPUT);
pinMode(rightMotorPin2, OUTPUT);
pinMode(enableLeftMotor, OUTPUT);
//Werkstatt zur Robotik Posten III: Motoren und Funktionen
//Seite 7
pinMode(leftMotorPin1, OUTPUT);
pinMode(leftMotorPin2, OUTPUT);
analogWrite(enableRightMotor, motorSpeed);
analogWrite(enableLeftMotor, motorSpeed);
}
void loop()
{
digitalWrite(rightMotorPin1, HIGH);
digitalWrite(leftMotorPin1, LOW);
delay(2000);
digitalWrite(rightMotorPin1, LOW);
digitalWrite(leftMotorPin1, HIGH);
delay(2000);
}
