# define echoPin 9
# define trigPin 10
long distance;

void setup(){
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin,LOW);
  distance = pulseIn(echoPin,HIGH)*0.017;
  Serial.print(distance);
  Serial.println(" cm");
  delay(100);
}
