


void setup() {
Serial.begin(9600);  
pinMode(4,INPUT);
pinMode(13,OUTPUT);

}

void loop() {
int pushbutton;
pushbutton = digitalRead(4);

digitalWrite(13,pushbutton);
Serial.println(pushbutton);
if (pushbutton == LOW)
digitalWrite(13,HIGH);
else digitalWrite(13,LOW);
}


