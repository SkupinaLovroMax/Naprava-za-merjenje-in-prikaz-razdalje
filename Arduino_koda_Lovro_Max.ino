#include <LiquidCrystal.h>

// Define pins for the ultrasonic sensor
const int trig = 10;
const int echo = 9;

// Define pins for the LCD
const int rs = 12;
const int en = 11;
const int D4 = 5;
const int D5 = 4;
const int D6 = 3;
const int D7 = 2;

// Create an instance of the LiquidCrystal class
LiquidCrystal lcd(rs, en, D4, D5, D6, D7);

// Variables for storing distance and time
float distance, t;

void setup() {
  // Initialize the pins for the ultrasonic sensor
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  // Initialize the LCD
  lcd.begin(16, 2);

  // Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Trigger the ultrasonic sensor
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  // Measure the duration of the echo pulse
  t = pulseIn(echo, HIGH);

  // Calculate the distance in centimeters
  distance = t / 58.82;

  // Clear the LCD before printing
  lcd.clear();
  
  // Display the static text on the first row
  lcd.setCursor(0, 0);
  lcd.print("Razdalja:");

  // Display the distance on the second row
  lcd.setCursor(0, 1);
  lcd.print(distance, 1);
  lcd.print(" cm");

  // Print the distance to the serial monitor for debugging
  Serial.print("Razdalja: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Wait a short time before the next reading
  delay(500);
}

