
const int button = A0;
const int led = 13;

void setup() {
    pinMode(led, OUTPUT);
    pinMode(button, INPUT);

  // initialize both serial ports:
  Serial.begin(9600);
  Serial.println("Hello World");
}

void loop() {
  int sensorVal = digitalRead(button);
  if (sensorVal == HIGH) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  Serial.println(sensorVal);
  delay(50);
}
