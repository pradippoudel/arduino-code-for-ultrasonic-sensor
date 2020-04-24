 long dis,dur;
 void setup()
 
 {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(3,OUTPUT);
pinMode(4,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(3,0);
delayMicroseconds(2);

digitalWrite(3,1);
delayMicroseconds(10);

digitalWrite(3,0);
dur=pulseIn(4,1);

dis=(0.034/2)*dur;

Serial.println(dis);


}
