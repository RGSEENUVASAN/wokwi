
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  //traffic light 1;
  pinMode(25,OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  //traffic light 2;
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
}  

void loop() {
  digitalWrite(25,HIGH);
  digitalWrite(18, HIGH);
  delay(1000);

  digitalWrite(25, LOW);
  digitalWrite(18, LOW);
  delay(1000);

  digitalWrite(26, HIGH);
  digitalWrite(19, HIGH);
  delay(1000);

  digitalWrite(26, LOW);
  digitalWrite(19, LOW);
  delay(1000);

  digitalWrite(27, HIGH);
  digitalWrite(17, HIGH);
  delay(1000);
}
