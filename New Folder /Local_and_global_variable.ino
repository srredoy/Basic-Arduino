//two type of variable,Local and global
//Local variable e setup function declare kora variable setup fuction ei use korte hbe ,loop e use korle error ase result
void setup()
{
 Serial.begin(9600);
 redoy=2;
 Serial.print(redoy);
}
void loop()
{
  Serial.print(redoy);
}
//Output error



{
 Serial.begin(9600);
 redoy=2;
 Serial.print(redoy);
}
void loop()
{
    int redoy=2;
    Serial.print(redoy);
}
//OUTPUT=222222........

//Variable setup kinba loop er baire declare kore tokhon sobjaigai use kora jbe.
int redoy=2;
void setup()
{
 Serial.begin(9600);
 

}

void loop()
{
  
    Serial.print(redoy);
}
//OUTPUT=2222.......
