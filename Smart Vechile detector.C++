#define TRIG_PIN 13
#define ECHO_PIN 12
#define LED_PIN 18

void setup() {
  Serial.begin(9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  long duration, distance;

  // Clear the trigger
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  // Set the trigger to HIGH for 10 ms
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Read the echo pin
  duration = pulseIn(ECHO_PIN, HIGH);
  
  // Calculate the distance
  distance = (duration * 0.034) / 2;

  // Print the distance to Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);

  // Detect vehicle (you can adjust the distance threshold)
  if (distance < 200) {
    digitalWrite(LED_PIN, HIGH); // Turn LED ON
  } else {
    digitalWrite(LED_PIN, LOW); // Turn LED OFF
  }

  delay(500); // Delay for a while
}
