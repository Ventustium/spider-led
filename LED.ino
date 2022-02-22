void setup()
{
  for(int i = 1; i < 13; i++)
  pinMode(i, OUTPUT);
}

void loop()
{
  mode1();
  mode1();
  mode2();
  mode3();
  mode3();
  mode2();
}

void mode1(){
  for(int i = 1; i < 13; i++){
    digitalWrite(i, HIGH) ;
    delay(100);
    digitalWrite(i, LOW) ;
    delay(100);
  }
  
    for(int i = 11; i > 1; i--){
    digitalWrite(i, HIGH) ;
    delay(100);
    digitalWrite(i, LOW) ;
    delay(100);
  }
}


void mode2(){
  for(int k = 5; k > 0; k--){
  for(int i = 1; i < 13; i++){
    digitalWrite(i, HIGH) ;
  }
  delay(100);
  for(int i = 1; i < 13; i++){
    digitalWrite(i, LOW) ;
  }
  delay(100);
  }
}

void mode3(){
  for(int i = 1; i < 13; i++){
    digitalWrite(i, HIGH) ;
    delay(100);
  }
  
    for(int i = 1; i < 13; i++){
    digitalWrite(i, LOW) ;
    delay(100);
  }
}