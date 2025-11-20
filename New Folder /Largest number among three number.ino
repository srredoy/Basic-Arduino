void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0){
int num1,num2,num3;
num1=100;
num2=250;
num3=369;
  if(num3>num2 && num3>num1){
Serial.print(num3);
Serial.print("  Largest number");
  } 
if(num2>num1 && num2>num3){
Serial.print(num2);
Serial.print("  Largest number");
  }
if(num1>num2 && num1>num3){
Serial.print(num1);
Serial.print("  Largest number");
  }
delay(1000);
Serial.println("");
  }
}

//OUTPUT=369 is largest
