void setup() {  
  
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  
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

    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);

//COmmunication between Raspberry and Arduino    
int analogPin1 = A1;
int analogPin2 = A2; 
int analogPin3 = A3;   

if (analogRead(analogPin1) > 500) {
  digitalWrite(2,HIGH);}
else {digitalWrite(2, LOW);}

if (analogRead(analogPin2) > 500) {
  digitalWrite(3,HIGH);}
else {digitalWrite(3, LOW);}

if (analogRead(analogPin3) > 500) {
  digitalWrite(4,HIGH);}
else {digitalWrite(4, LOW);} 

       
//Condition to enter in the programme cycle

if (val > 5){

  
//Applying a correction to the decimal value
//Exponential scale

val = val / 3;

 

  if (val >1){
    digitalWrite(13, HIGH);
  }
  if (val >2){
    digitalWrite(12, HIGH);
  }
  if (val >3){
    digitalWrite(11, HIGH);
  }
  if (val >5){
    digitalWrite(10, HIGH);
  }
    if (val >8){
    digitalWrite(9, HIGH);
  }
  if (val >13){
    digitalWrite(8, HIGH);
  }
  if (val >17){
    digitalWrite(7, HIGH);
  }
  if (val >25){
    digitalWrite(6, HIGH);
  }    
   delay(100);
  }
}
