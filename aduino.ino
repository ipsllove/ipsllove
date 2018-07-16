int in1 = 7;
//int in2 = 2;
int photo = 8;           // photo sensor
#define ON 0
#define OFF 1

void setup()
{
  pinMode(in1, OUTPUT);
  //pinMode(in2, OUTPUT);
  pinMode(photo, INPUT_PULLUP);
  Serial.begin(9600);
  relay_SetStatus(ON, OFF); //turn off all the relay
}

void loop()
{
  Serial.println(digitalRead(photo));
  delay(200);
  if(digitalRead(photo)==0)  // sensor detect
{ 
  delay(4000);
  relay_SetStatus(OFF, OFF);
  delay(3000);
   Serial.print('d'); //signal
   delay(1000);
   relay_SetStatus(ON, OFF); 
}
 
}
void relay_SetStatus(unsigned char status_1, unsigned char status_2)
{
  digitalWrite(in1, status_1);
//  digitalWrite(in2, status_2);
}




