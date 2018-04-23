int analogInPin = A5; 

int out =13;
int sensorValue = 0; // value read from the serial


void setup() {
  Serial.begin(9600);
  pinMode(out, OUTPUT);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);


  Serial.print("sensor = " );
  Serial.println(sensorValue);

  delay(200);
  
  if(sensorValue>700)
  {
    digitalWrite(out,1);
    delay(100);
  }
  else
  {
    digitalWrite(out,0);
  }
  
}
