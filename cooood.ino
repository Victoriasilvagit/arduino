int verm = 13;
int bra = 11;
int ver = 12;
int bt = 7;
int press = 0;
int deboucing(int btx);

void setup() {
  // put your setup code here, to run once:
  pinMode(verm, OUTPUT);
  pinMode(bra, OUTPUT);
  pinMode(ver, OUTPUT);
  pinMode(bt, INPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(bt)){
    
    press = deboucing(bt);
  
    if(press == 1){
      if(!digitalRead(verm) && !digitalRead(bra) && !digitalRead(ver)){
        digitalWrite(verm, HIGH);
      }
      if(digitalRead(verm)){
        digitalWrite(verm, LOW);
        digitalWrite(ver, LOW);
        digitalWrite(bra, HIGH);
      } else if(digitalRead(bra)){
        digitalWrite(bra, LOW);
        digitalWrite(verm, LOW);
        digitalWrite(ver, HIGH);
      } 
      else if(digitalRead(ver)){
        digitalWrite(ver, LOW);
        digitalWrite(bra, LOW);
        digitalWrite(verm, HIGH);
      } 
    }
  }
}
int deboucing(int btx){
  delay(100);
  if(digitalRead(btx)){
    return 1;
  } else {
    return 0;
  }
}
