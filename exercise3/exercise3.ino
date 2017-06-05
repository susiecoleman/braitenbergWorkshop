const int IN1 = 8;
const int IN2 = 7;
const int ENA = 9;

const int IN3 = 5;
const int IN4 = 4;
const int ENB = 6;

const int trigLeft = 13;
const int echoLeft = 12;
float pingTimeLeft;

const int trigRight = 11;
const int echoRight = 10;
float pingTimeRight;

const float lengthOfPingTime = 25000;

void setup() {
  //Code that only runs once
}

void loop() {
  //Code that loops forever
}

float scaleTime(float value) {
  return (value / 12000) * 255;
}
