int Az = 10;
void traco();
void ponto();

void setup()
{
  pinMode(Az, OUTPUT);
}

  void loop()
{
  ponto();
  ponto();
  ponto();
  
  traco();
  traco();
  traco();
  
  ponto();
  ponto();
  ponto();

  delay (2000);
}

void traco()
{
  digitalWrite(Az, HIGH);
  delay(200);
  digitalWrite(Az, LOW);
  delay(500);
  
}

void ponto()
{
  digitalWrite(Az, HIGH);
  delay(50);
  digitalWrite(Az, LOW);
  delay(500);
}
