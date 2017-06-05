//Left wheel
const int IN1 = 8;
const int IN2 = 7;
const int ENA = 9;

//Right wheel
const int IN3 = 5;
const int IN4 = 4;
const int ENB = 6;

const int input = 75;


void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);

  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);

//Right wheel
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, input);
  
//Left Wheel
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, input);
}

void loop() {}
