//hello world
//for mesurement sensor
# define echoPin 9
# define trigPin 10
long distance;
//for movement
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
  //distance sensor
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
  if (analogRead(SensorWhite) < 988) { // Fix Me
    //right();
    backwards();
    right();
  }
  dmesurement();
  if (distance < 40){forward();}
  else {wait();}
  
}

void wait(){
  right();
}

void forward() {
  analogWrite(enableRightMotor, motorSpeed);
  digitalWrite(rightMotorPin1, HIGH);
  digitalWrite(rightMotorPin2, LOW);

  analogWrite(enableLeftMotor, motorSpeed);
  digitalWrite(leftMotorPin1, HIGH);
  digitalWrite(leftMotorPin2, LOW);

}
void backwards(){
digitalWrite(rightMotorPin1, LOW);
digitalWrite(rightMotorPin2, HIGH);
analogWrite(enableRightMotor, motorSpeed);

digitalWrite(leftMotorPin1, LOW);
digitalWrite(leftMotorPin2, HIGH);
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
void left() { //guess what, it turns left
  analogWrite(enableRightMotor, motorSpeed);
  digitalWrite(rightMotorPin1, LOW);
  digitalWrite(rightMotorPin2, HIGH);

  analogWrite(enableLeftMotor, motorSpeed);
  digitalWrite(leftMotorPin1, HIGH);
  digitalWrite(leftMotorPin2, LOW);
}
//distance mesurement
void dmesurement(){
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin,LOW);
  distance = pulseIn(echoPin,HIGH)*0.017;
  Serial.print(distance);
  Serial.println(" cm");
  return distance;
}
