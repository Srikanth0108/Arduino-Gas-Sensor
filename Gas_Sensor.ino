int buzzer=13;
int smokeA0=A0;
void setup(){
  pinMode(buzzer,OUTPUT);
  pinMode(smokeA0,INPUT);
  Serial.begin(9600);
  Serial.println("Gas Sensor Warming Up");
  delay(20000);
  
}
void loop(){
  float sensorvalue=analogRead(A0);
  Serial.println(sensorvalue);
  if(sensorvalue>600){
    Serial.println("LPG GAS Detected!!!");
    digitalWrite(buzzer,HIGH);
  }
  else{
    Serial.println("LPG GAS Not Detected!!!");
    digitalWrite(buzzer,LOW);
    }
  delay(20000);
}
