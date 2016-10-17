//stmívání a rozvisování ledky

int led = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 256; i++){
    analogWrite(led, i);
    delay(10);  
  }

  for (int j = 255; j >= 0; j--){
    analogWrite(led, j);
    delay(10);  
  }
}
