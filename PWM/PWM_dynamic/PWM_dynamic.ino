int Boost =4 ;
int Buck = 13;
float VoltageC = A0;
float VoltageB = A1;
float Vbat = 0;
float Vcap = 0;
int DBnorm =0;
int Dbnorm;
float Dbo ;
float Dbu ;
float k;
float j;


void setup() {
Serial.begin (9600);
int myEraser = 7;             
TCCR0B &= ~myEraser;
int myPrescaler = 1;          
TCCR0B |= myPrescaler;
}

void loop() {
Vbat = analogRead(VoltageB)*(5.0/1024.0)*13.0;
Vcap = analogRead(VoltageC)*(5.0/1024.0)*13.0;
delay(100);
Dbo = (48.0-Vcap)/48.0; 
Dbu = Vcap/48.0; 
DBnorm = ((127.0*Dbo)/0.5);
Dbnorm = ((127.0*Dbu)/0.5);

if (Dbo >= 0.21 && Dbo <= 0.54){
analogWrite(Boost, DBnorm);}
else {
analogWrite(Boost, 127); }
 //analogWrite(Buck, 0); 
Serial.println(Vcap);

//Serial.println(Vbat); 

if (Dbu >= 0.41 && Dbu <= 0.71){ 
 analogWrite(Buck, Dbnorm);}
else{
 analogWrite(Buck, Dbnorm);}

}
