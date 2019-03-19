void setup() {  
  //set of output pins (10;11;12;13)
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  //Opens serial port, sets data rate to 9600 bps
  Serial.begin(9600);
}

void loop() {
  //Reading of the analog sound sensor - Analog input (A0)
  int val = analogRead(0);
  //Give to computer communication (PORT 9600) a decimal value
  Serial.println(val,DEC);

//programme that compares the decimal value and lights differents LEDS
//Close all LED at the same time 
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  

  if (val >10){
    digitalWrite(13, HIGH);

  }
  if (val >20){
    digitalWrite(12, HIGH);

  }
  if (val >30){
    digitalWrite(11, HIGH);

  }
  if (val >40){
    digitalWrite(10, HIGH);
  }
      delay(50);
}
