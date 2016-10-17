void setup() {
  // put your setup code here, to run once:  
  pinMode(13, OUTPUT); //nastaveni funkcnich pinu pinMode(cislo pinu, in/out);
  //PORT 13: Port má zabudován rezistor, tudíž není potřeba k portu 13 předřazovat rezistor v případě zapojení diody 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); //nastaveni zapisu na pin (pin, logicka 1 = HIGH)
  delay(100); //milisekundy -- pro microsekundy delayMicroseconds();
  digitalWrite(13, LOW); // logicka 0 = LOW, funguje i poouhe 1/0
  delay(100);
}
