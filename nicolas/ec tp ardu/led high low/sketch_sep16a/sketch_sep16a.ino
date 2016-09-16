const int led1 = 4;
const int led2 = 9;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  digitalWrite(led1, 1);
  digitalWrite(led2, 1);
  delay(600);
}

void loop() {
  digitalWrite(led1, 0);
  digitalWrite(led2, 1);
  delay(300);
  digitalWrite(led1, 1);
  digitalWrite(led2, 0);
  delay(300);

}
