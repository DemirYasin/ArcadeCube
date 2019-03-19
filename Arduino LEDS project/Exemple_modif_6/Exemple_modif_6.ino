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
  //Opens serial port, sets data rate to 19200 bps
  Serial.begin(19200);
  
}

void loop() {
   //Reading of the analog sound sensor - Analog input (A0)
  int sensor = analogRead(0);
  //Give to computer communication (PORT 19200) a decimal value
  Serial.println(sensor,DEC);

//programme that compares the decimal value and lights differents LEDS
//Close LEDS at the same time

    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);

//Tried to make an exponential scale without amended decimal value

if (sensor > 0){
 
  if (sensor >0){
    digitalWrite(13, HIGH);

  }
  if (sensor >1){
    digitalWrite(12, HIGH);

  }
  if (sensor >2){
    digitalWrite(11, HIGH);

  }
  if (sensor >3){
    digitalWrite(10, HIGH);
  }
    if (sensor >4){
    digitalWrite(9, HIGH);

  }
  if (sensor >5){
    digitalWrite(8, HIGH);

  }
  if (sensor >7){
    digitalWrite(7, HIGH);

  }
  if (sensor >9){
    digitalWrite(6, HIGH);
  }    
   delay(50);
  }
}
