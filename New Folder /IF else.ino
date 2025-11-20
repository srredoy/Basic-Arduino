/*if(condition){
code
 }
else{
code
}*/



void setup()
{
  Serial.begin(9600);
}

void loop()
{
char data=Serial.read();
  if(data=='r'){
Serial.println("Today is rainy day");
  }
  else {
Serial.println("Today is Sunnyday");
delay(1000);
  }
}
//output=r press na korle sunny day ashtei thakebe,r press korle rainy day ashbe,delay use kore result theme theme ashbe




//serial.available use korle tokhon press korlei output dekhabe noito output dekhabe na

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0){
char data=Serial.read();
  if(data=='r'){
Serial.println("Today is rainy day");
  }
  else {
Serial.println("Today is Sunnyday");
delay(1000);
  }
  }
}
//Output=r press korle rainy day onno jekono ta press korle sunny day.
//press na korle output dekhabe na






//else use na kore just if diyew code kora jai,esara code or,and conditional statement use kora jai

void setup()
{
  Serial.begin(9600);
}

void loop()
{
char data=Serial.read();
  if(data=='r' || data=='R'){
Serial.println("Today is rainy day");
  }
  if(data=='s' || data=='S'){
Serial.println("Today is sunny day");
  }
}
//output=s or S press korle sunny day,r or R use kore rainy day ashbe



//largest number among 2 number
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0){
int num1=12;
int num2=15;
  if(num1>num2){
Serial.print(num1);
Serial.print("  Largest number");
  }
  else {
Serial.print(num2);
Serial.print("   Largest number");
delay(1000);
  }
Serial.println("");
  }
}
//Outpu=15 is largest
