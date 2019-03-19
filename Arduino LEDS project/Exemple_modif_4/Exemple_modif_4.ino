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
  //init compteur
  int compteur;
  //Reading of the analog sound sensor - Analog input (A0)
  int val = analogRead(0);
  //Give to computer communication (PORT 9600) a decimal value
  Serial.println(val,DEC);

//programme that compares the decimal value and lights differents LEDS
//Close LEDS at the same time
//Scale is more suitable than before (more Pins)

  compteur = compteur + val;

    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);

//Changing the condition to make the programme cycle
//Adding a counter: enter in programme if only the value is bigger than 5

if (compteur > 5){

  
  
val = compteur / 4;

 

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
 compteur = 0;
   delay(100);
  }
}
