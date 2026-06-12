// SOB 15
int analogPin = A0;
int sensorValue = 0;
int led = 13;
int buzzer = 2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(analogPin,INPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(analogPin);
  Serial.println(sensorValue);
  delay(100);
  if (sensorValue > 500){
    digitalWrite(led,HIGH);
  
  }
  else if (sensorValue<15){
    digitalWrite(buzzer,HIGH);
  }
  
  else{
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
  }
}
