#include <DHT.h>
#define Type DHT11
int sensePin=A0;
DHT dht(sensePin,Type);
float temp;


void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  Serial.begin(9600);
  dht.begin();


}


void loop() {
  // put your main code here, to run repeatedly:
  temp=dht.readTemperature();
  Serial.println(temp);
  if (temp>28)
      digitalWrite(2, HIGH);
   else
       digitalWrite(2, LOW);
         
  }
