

int ledPiny[] = {12, 11, 10};
int pocetPinu = 3;

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < pocetPinu; i++)
    pinMode(ledPiny[i], OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //while (!Serial) {
  //  
  //}
  for (int i = 0; i < pocetPinu; i++){
    digitalWrite(ledPiny[i], LOW);
    delay(250);
    digitalWrite(ledPiny[i], HIGH);
    delay(250);
    digitalWrite(ledPiny[i], LOW);
  }
  delay(250);
  
  for (int i = pocetPinu-1; i >= 0 ; i--){
    digitalWrite(ledPiny[i], HIGH);
    delay(250);
  }
  delay(250);
  
}
