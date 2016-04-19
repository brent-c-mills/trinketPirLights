
int pirPin = D0;
int photoPin = A0;
int led = A1;

void setup()
{
  pinMode(pirPin, INPUT);
  pinMode(photoPin, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  int pirValState, photoValState;
  pirValState = digitalRead(pirPin);
  photoValState = digitalRead(photoPin);
  
  if(pirValState == HIGH && photoValState == HIGH)
  {
    digitalWrite(led, HIGH);
    delay(2000);
  }
  else
  {
    digitalWrite(led, LOW);
  }

}