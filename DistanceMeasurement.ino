#include <LiquidCrystal.h>

// Define the trigger and echo pins for the ultrasonic sensor
#define trigger 18
#define echo 19

// Initialize the LCD with the specified pins
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

// Variables to store time and distance
float time = 0, distance = 0;

void setup() {
  // Initialize the LCD with 16 columns and 2 rows
  lcd.begin(16, 2);
  
  // Set the trigger pin as OUTPUT and echo pin as INPUT
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  
  // Display initial messages on the LCD
  lcd.print(" Ultra sonic");
  lcd.setCursor(0, 1);
  lcd.print("Distance Meter");
  delay(2000);
  
  // Clear the LCD and display a different message
  lcd.clear();
  lcd.print(" Circuit Digest");
  delay(2000);
}

void loop() {
  // Clear the LCD for new data
  lcd.clear();
  
  // Generate a pulse on the trigger pin
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  
  // Measure the time it takes for the echo to return
  time = pulseIn(echo, HIGH);
  
  // Calculate the distance based on the time and speed of sound
  distance = time * 340 / 20000;
  
  // Display the distance in centimeters on the LCD
  lcd.clear();
  lcd.print("Distance:");
  lcd.print(distance);
  lcd.print("cm");
  
  // Move to the second line on the LCD and display the distance in meters
  lcd.setCursor(0, 1);
  lcd.print("Distance:");
  lcd.print(distance / 100);
  lcd.print("m");
  
  // Wait for 1 second before taking the next measurement
  delay(1000);
}
