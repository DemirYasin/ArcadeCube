void setup() {  
  //set of output pins (6;7;8;9;10;11;12;13) 
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
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
//Close LEDS at the same time
//Scale is more suitable than before (more Pins)

    digitalWrite(13, LOW);

    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
 
    digitalWrite(10, LOW);

    digitalWrite(9, LOW);

    digitalWrite(8, LOW);

    digitalWrite(7, LOW);

    digitalWrite(6, LOW);
 

  if (val >5){
    digitalWrite(13, HIGH);

  }
  if (val >10){
    digitalWrite(12, HIGH);

  }
  if (val >15){
    digitalWrite(11, HIGH);

  }
  if (val >20){
    digitalWrite(10, HIGH);
  }
    if (val >25){
    digitalWrite(9, HIGH);

  }
  if (val >28){
    digitalWrite(8, HIGH);

  }
  if (val >30){
    digitalWrite(7, HIGH);

  }
  if (val >32){
    digitalWrite(6, HIGH);
  }    
   delay(100);
}
