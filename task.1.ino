void setup()
{
  pinMode(13, OUTPUT);
   pinMode(12, OUTPUT);
   pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(2000); 
  digitalWrite(12, HIGH);
  delay(1000); 
  digitalWrite(12, LOW);
  delay(1000);
   digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000); digitalWrite(12, HIGH);
  delay(1000); 
  digitalWrite(12, LOW);
  delay(1000);
   digitalWrite(12, LOW);
   digitalWrite(13, LOW);
   delay(0);
  digitalWrite(11, HIGH);
  delay(3000);
  digitalWrite(11, LOW); 
  
  
  
  
  
  delay(2000);

}
