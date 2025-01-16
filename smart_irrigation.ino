// Define pins for soil moisture sensor, relay, and LED
const int soilSensorPin = A0;  // Analog pin for soil moisture sensor (for analog reading)
const int soilSensorDigitalPin = 8;  // Digital pin for soil moisture sensor DO pin
const int relayPin = 7;        // Digital pin for the relay module
const int threshold = 500;     // Threshold for soil dryness (adjust as needed)

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Set the relay pin and soil sensor digital pin as outputs
  pinMode(relayPin, OUTPUT);
  pinMode(soilSensorDigitalPin, INPUT);

  // Turn off the water pump initially
  digitalWrite(relayPin, LOW);

  Serial.println("Smart Irrigation System Initialized!");
}

void loop() {
  // Read the soil moisture sensor value (analog value)
  int soilValue = analogRead(soilSensorPin);

  // Read the digital output from the soil moisture sensor
  int soilDry = digitalRead(soilSensorDigitalPin);

  // Print the sensor value for debugging
  Serial.print("Soil Moisture Value (Analog): ");
  Serial.println(soilValue);

  // Check if the soil is dry using the digital output (0: Wet, 1: Dry)
  if (soilDry == HIGH) {
    Serial.println("Soil is dry. Pump ON.");
    digitalWrite(relayPin, HIGH); // Activate the relay to turn on the pump
  } else {
    Serial.println("Soil is wet. Pump OFF.");
    digitalWrite(relayPin, LOW);  // Deactivate the relay to turn off the pump
  }

  delay(1000); // Delay for stability
}
