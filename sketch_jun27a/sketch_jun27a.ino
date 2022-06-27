char inBit;
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  if(Serial.available()>0){
    inBit = Serial.read();
    if(inBit == '1'){
      digitalWrite(LED_BUILTIN,HIGH);
      }
     else if(inBit == '0'){
      digitalWrite(LED_BUILTIN,LOW);
      }    
    }
}
