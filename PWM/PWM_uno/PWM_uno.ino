
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
//pinMode(Boost, OUTPUT);
//pinMode(Buck, OUTPUT);
Serial.begin (9600);
int myEraser = 7;             
TCCR0B &= ~myEraser;
int myPrescaler = 1;          
TCCR0B |= myPrescaler;}

    void loop() {
  
Vbat = analogRead(VoltageB)*(5.0/1024.0)*13.0;
Vcap = analogRead(VoltageC)*(5.0/1024.0)*13.0;
delay(10000);
 // if ( Vbat > 0.0 ){
  //Serial.println(Vbat); 
  //delay(15000);}
 // }
//Serial.println(Vbat);
  // delay(15000);
  //k = Vcap/48.0;
Dbo = (48.0-38.0)/48.0; 
Dbu = 38.0/48.0; 
  //Serial.println(Dbo);
  //Serial.println(k);
j = 127.0 * Dbo;
//Serial.println(j);
DBnorm = ((126.0*Dbo)/0.5)-13.5;
Dbnorm = ((127.0*Dbu)/0.5)-13.5;

//Serial.println(Dbo);
//Serial.println(DBnorm);
// Boost 
//if (Vcap >= 22.0){
//Serial.println(DBnorm);
//analogWrite(Boost, DBnorm);
 
//Serial.println(DBnorm);
//analogWrite(Buck, 0);//}
//else{
//analogWrite(Boost, 0);
//analogWrite(Buck, 0);}
//Serial.println(Dbnorm);
 //Buck 
 
//if (Vcap <= 38.0){
analogWrite(Buck, Dbnorm);
//Serial.println(Dbnorm);
Serial.println(Vbat);
delay(100);
//analogWrite(Boost, 0);}
//else{
//analogWrite(Buck, 0);
//analogWrite(Boost, 0);}} 
}


