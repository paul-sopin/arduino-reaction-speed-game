const int rightButton = 8;
const int leftButton = 7;
const int pinkLED = 12;
const int redLED = 11;
const int yellowLED = 10;
const int greenLED = 9;
const int leftLED = 6;
const int rightLED = 5;

/* 
Premise:  Two players compete against each other to test their
reaction speed times. The lights will count down from green, to
yellow, to red, and finally purple (after a randomized interval).
Both cyan lights on the player's respective sides will also light,
and the first player to click their button wins the match. New games
automatically start 3 seconds following the previous one.

Wire color-coding: 
- Black --> Ground
- Orange --> Player LEDs
- Blue --> Button input
- Green --> Countdow LEDs
*/ 

void setup() {
  pinMode(rightButton, INPUT_PULLUP);
  pinMode(leftButton, INPUT_PULLUP);

// using input pullup, default value for buttons is 1, pressed is 0

  pinMode(pinkLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(leftLED, OUTPUT);
  pinMode(rightLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(greenLED, HIGH);
  delay(1000);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, HIGH);
  delay(1000);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, HIGH);
  delay(random(3000, 6000));
  digitalWrite(redLED, LOW);
  unsigned long timeSinceStart = millis();
  digitalWrite(pinkLED, HIGH);
  digitalWrite(leftLED, HIGH);
  digitalWrite(rightLED, HIGH);
  while ((digitalRead(leftButton) == 1) && (digitalRead(rightButton) == 1)){}
  float secondsPassed = (millis() - timeSinceStart) / 1000.0;
  if (digitalRead(leftButton) == 0) {
    digitalWrite(rightLED, LOW);
  }
    else if (digitalRead(rightButton) == 0) {
      digitalWrite(leftLED, LOW);
    }
  Serial.println("It took you " + String(secondsPassed, 1) + " seconds!");
  digitalWrite(pinkLED, LOW);
  delay(3000);
  digitalWrite(leftLED, LOW);
  digitalWrite(rightLED, LOW);
}
