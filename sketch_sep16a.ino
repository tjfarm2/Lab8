const int button = 2;                    

//declare constant for button
int buttonState = 0;

void setup() {
  pinMode(7, OUTPUT);  // Red LED
  pinMode(6, OUTPUT);  // Yellow LED
  pinMode(5, OUTPUT);  // Green LED
  pinMode(buttonState, INPUT_PULLUP);
}


void loop() {
  buttonState = digitalRead(buttonState);

  if (buttonState == LOW) {
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
  } else {
  digitalWrite(7, HIGH);  // Red on
  delay(3000);           // Stay red for 3 seconds
  digitalWrite(7, LOW);   // Red off


  digitalWrite(6, HIGH);  // Yellow on
  delay(1000);           // Stay yellow for 1 second
  digitalWrite(6, LOW);   // Yellow off


  digitalWrite(5, HIGH);  // Green on
  delay(3000);           // Stay green for 3 seconds
  digitalWrite(5, LOW);   // Green off
}
}