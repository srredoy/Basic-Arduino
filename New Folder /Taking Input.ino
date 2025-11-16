void setup()
{
Serial.begin(9600);
 
}

void loop()
{
int a=Serial.parseInt();
Serial.println(a);
}
//OUTPUT=00010,jei input newa hbe seitai ashbe






//character taking
void setup()
{
Serial.begin(9600);
 
}

void loop()
{
char a=Serial.read();
Serial.println(a);
delay(1000);
} 



//String taking
void setup()
{
Serial.begin(9600);
 
}

void loop()
{
String a=Serial.readString();
Serial.println(a);
delay(1000);
} 






//Float taking
void setup()
{
Serial.begin(9600);
 
}

void loop()
{
float a=Serial.parsefloat();
Serial.println(a);
}
//OUTPUT=00010,jei input newa hbe seitai ashbevoid setup()
{
Serial.begin(9600);
 
}
