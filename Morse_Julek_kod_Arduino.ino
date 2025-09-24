
int led = 7;
int key = 6;
int buzzer = 8;
int decoder = 10;

void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);  
  pinMode(key,INPUT_PULLUP) ;  
  pinMode(buzzer,OUTPUT);
  pinMode(decoder,OUTPUT);
}


void loop() {


if (digitalRead(key)== LOW ) {   

  digitalWrite(led, HIGH);  
  tone(buzzer, 3000);
  digitalWrite(decoder,HIGH);
  delay(10); 
}

  if (digitalRead(key)== HIGH) {  
 digitalWrite(led, LOW);
 digitalWrite(decoder,LOW);
 noTone(buzzer);
 delay(10);

  }



  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW           
}