
const int born_sensor = A0;
float temp = 0;


void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  temp = analogRead(born_sensor);
  temp = (temp - 500)/10;
  
  if(temp >= 30){
    digitalWrite(2,HIGH);
    if(temp > 50){
      digitalWrite(3,HIGH);
   	  digitalWrite(4, HIGH);
  	  delay(1000); 
      digitalWrite(4, LOW);
      delay(1000); 
    }
  }
}