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
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);

  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);  
  
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  writeToTrigPin(trig);
  pingTime = pulseIn(echo, HIGH, lengthOfPingTime);

  float input = 155 - scaleTime(pingTime);

//Left Wheel
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, input);

//Right wheel
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, input);
  
  delay(100);
}

void writeToTrigPin(int pin) {
  digitalWrite(pin, LOW);
  delayMicroseconds(2000);
  digitalWrite(pin, HIGH);
  delayMicroseconds(15);
  digitalWrite(pin, LOW);
  delayMicroseconds(10);
}

int scaleTime(float value) {
  return (value / lengthOfPingTime) * 255;
}


