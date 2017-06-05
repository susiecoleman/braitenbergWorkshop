const int IN1 = 8;
const int IN2 = 7;
const int ENA = 9;

const int IN3 = 5;
const int IN4 = 4;
const int ENB = 6;

const int trig = 11;
const int echo = 10;
float pingTime;

const float lengthOfPingTime = 25000;

void setup() {
  //Code that only runs once
}

void loop() {
  //Code that loops forever
}

int scaleTime(float value) {
  return (value / lengthOfPingTime) * 255;
}
