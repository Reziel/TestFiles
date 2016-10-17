int led = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = 0;
  while (i < 256){
    analogWrite(led, i);
    delay(10);
    i++;
  }

  // put your main code here, to run repeatedly:
  int j = 255;
  while (j >= 0){
    analogWrite(led, j);
    delay(10);
    j--;
  }
}
