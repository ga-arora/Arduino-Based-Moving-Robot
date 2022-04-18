

const int mt1 =  2;
const int mt2 =  3;
const int mt3 =  4;
const int mt4 =  5;
void setup()
{
  pinMode(mt1, OUTPUT);
  pinMode(mt2, OUTPUT);
  pinMode(mt3, OUTPUT);
  pinMode(mt4, OUTPUT);
  digitalWrite(mt1, HIGH);
  digitalWrite(mt2, HIGH);
  digitalWrite(mt3, HIGH);
  digitalWrite(mt4, HIGH);
  Serial.begin(9600);
}
void loop()
{
  unsigned char in = 0;
  if (Serial.available())
  {
    delay(100);
    while (Serial.available() > 0)
      in = Serial.read();
  }

  if (in == 49)
  {
    digitalWrite(mt1, LOW);
    digitalWrite(mt2, HIGH);
    digitalWrite(mt3, LOW);
    digitalWrite(mt4, HIGH);
    Serial.println('Forward Command: 1');
    Serial.println('go');
  }
  if (in == 50)
  {
    digitalWrite(mt1, HIGH);
    digitalWrite(mt2, LOW);
    digitalWrite(mt3, HIGH);
    digitalWrite(mt4, LOW);
    Serial.println('backward Command: 2');
    Serial.println('back');
  }
  if (in == 51)
  {
    digitalWrite(mt1, HIGH);
    digitalWrite(mt2, LOW);
    digitalWrite(mt3, LOW);
    digitalWrite(mt4, HIGH);
    delay(500);
    digitalWrite(mt1, HIGH);
    digitalWrite(mt2, HIGH);
    digitalWrite(mt3, HIGH);
    digitalWrite(mt4, HIGH);
    delay(500);
    Serial.println('left Command: 3');
    Serial.println('left');
  }
  if (in == 52)
  {
    digitalWrite(mt1, LOW);
    digitalWrite(mt2, HIGH);
    digitalWrite(mt3, HIGH);
    digitalWrite(mt4, LOW);
    delay(500);
    digitalWrite(mt1, HIGH);
    digitalWrite(mt2, HIGH);
    digitalWrite(mt3, HIGH);
    digitalWrite(mt4, HIGH);
    delay(500);
    Serial.println('right Command: 4');
    Serial.println('right');
  }
  if (in == 53)
  {
    digitalWrite(mt1, HIGH);
    digitalWrite(mt2, HIGH);
    digitalWrite(mt3, HIGH);
    digitalWrite(mt4, HIGH);
    Serial.println('stop Command: 5');
    Serial.println('stop');
  }
  Serial.println(in);
}
