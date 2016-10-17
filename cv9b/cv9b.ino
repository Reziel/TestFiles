

int ledPiny[] = {12, 11, 10};
int pocetPinu = 3;
int p = 0;

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < pocetPinu; i++)
    pinMode(ledPiny[i], OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //while (!Serial) {
  //  
  //}
  p++;
  int randDelay = random(100, 1000);
    Serial.println("--- " + String(p) + ": delay " + String(randDelay) + "s ---");
  int randPin = 0;
  for (int i = 0; i < pocetPinu; i++){
    randPin = random(0, 2);
    if (randPin == 1)
      digitalWrite(ledPiny[i], LOW);
      Serial.println(String(ledPiny[i]) + "-" + String(randPin));
  }
  delay(randDelay);
  for (int i = 0; i < pocetPinu; i++){
    digitalWrite(ledPiny[i], HIGH);
  } 
}

/*
 Další řešení - pulzující na analogu
 ====
 int i = 0;
  int a = 0;
  while(i<512){
    i++;
    for(a=0;a<pocetPinu;a++){
      analogWrite(ledPiny[a],  abs(((i-a*(255/pocetPinu))%255)-256) );
    }    
    delay(10);
  }

  Další řešení půjezdu rozsvicení diod
  ====
  for (int i = -diodesCount; i < (diodesCount - 1); i++) {
    int j = abs(i);
    digitalWrite(diodes[j], HIGH);
    delay(100);
    digitalWrite(diodes[j], LOW);
  }
*/
