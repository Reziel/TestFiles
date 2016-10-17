int led = 9;
int svitivost = 0; //Rozsah PWM = 0 ~ 255
int krok = 5;  

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led, svitivost);
  
  svitivost += krok;
  //if (svitivost == 255) {
  //  krok = -5;
  //} else if (svitivost == 0) {
  //  krok = 5;
  //}

  if (svitivost == 255 || svitivost == 0) {
    krok = -krok;
  }
  
  delay(100);
}
