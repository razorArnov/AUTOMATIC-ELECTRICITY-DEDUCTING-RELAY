int sensorPin = A0; // select the input pin for the LDR

int sensorValue = 0; // variable to store the value coming from the sensor

int relay = 2;

void setup() { // declare the ledPin as an OUTPUT:

pinMode(relay, OUTPUT);

Serial.begin(9600); }

void loop()

{

Serial.println("light is on");

sensorValue = analogRead(sensorPin);

Serial.println(sensorValue);

if (sensorValue < 100)

{

Serial.println("relay on");

digitalWrite(relay,HIGH);

delay(1000);

}

digitalWrite(relay,LOW);

delay(sensorValue);

}
