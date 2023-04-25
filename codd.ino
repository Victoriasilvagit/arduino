int led = 13;
int bt = 7;
int press = 0;
int deboucing(int btx);


void setup()
{
  pinMode(led, OUTPUT);
  pinMode(bt, INPUT);  
}

void loop()
{
  if(digitalRead(bt)){
    press = deboucing(bt);
  
    if(press == 1){
      if(digitalRead(led)){
        digitalWrite(led, LOW);
      } 
      else{
        digitalWrite(led, HIGH);
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
