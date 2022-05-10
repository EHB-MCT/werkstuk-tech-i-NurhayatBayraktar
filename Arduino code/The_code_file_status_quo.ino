const int pinLight1 = 3;
const int pinLight2 = 4;
const int pinLight3 = 5;
const int pinLight4 = 6;
const int button= 7;

int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(pinLight1, OUTPUT);
  pinMode(pinLight2, OUTPUT);
  pinMode(pinLight3, OUTPUT);
  pinMode(pinLight4, OUTPUT);
 
}
 
void loop() { 
  // put your main code here, to run repeatedly:  
  buttonState = digitalRead(button);
  
  if (buttonState == HIGH) {
    digitalWrite(pinLight1,HIGH);
    digitalWrite(pinLight2,HIGH);
    digitalWrite(pinLight3,HIGH);
    digitalWrite(pinLight4,HIGH);
  } else {
    digitalWrite(pinLight1,LOW);
    digitalWrite(pinLight2,LOW);
    digitalWrite(pinLight3,LOW);
    digitalWrite(pinLight4,LOW);
  }
}
