int varled11 = 11;
int varled12 = 12;
int varled13 = 13;
int varled1 = 2;
void setup() {
pinMode(varled11, OUTPUT);
pinMode(varled12, OUTPUT);
pinMode(varled13, OUTPUT);
pinMode(varled1, OUTPUT);
}
void loop() {
{digitalWrite(varled11, HIGH);
delay(100);
digitalWrite(varled11, LOW);
delay(100);}
{digitalWrite(varled12, HIGH);
delay(100);
digitalWrite(varled12, LOW);
delay(100);}
{digitalWrite(varled13, HIGH);
delay(100);
digitalWrite(varled13, LOW);
delay(100);}
{digitalWrite(varled1,HIGH);
delay(100);
digitalWrite(varled1,LOW);
delay(100);
}
}