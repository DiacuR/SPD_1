int leds[] = {13, 12 , 7};

void setup()
{
  int i;
	for(i =0;i<3;i++)
  {
   	pinMode(leds[i], OUTPUT); 
  }

}

void loop()
{
  int j;
  
  for(j = 0;j<3;j++)
  {
  
    if(leds[j] == 7 || leds[j] == 13 )
    {
      digitalWrite(leds[j], HIGH);
      delay(250); // Wait for 1000 millisecond(s
      digitalWrite(leds[j], LOW);
    }
    else
    {
      digitalWrite(leds[j], HIGH);
      delay(500); // Wait for 1000 millisecond(s)
      digitalWrite(leds[abs(j)], LOW);
      delay(500); // Wait for 1000 millisecond(s)
    }
  }
  
  for(j = 2;j >= 0;j--)
  {
  
    if(leds[j] == 7 || leds[j] == 13)
    {
      digitalWrite(leds[j], HIGH);
      delay(250); // Wait for 1000 millisecond(s)
      digitalWrite(leds[j], LOW);
    }
    else
    {
      digitalWrite(leds[j], HIGH);
      delay(500); // Wait for 1000 millisecond(s)
      digitalWrite(leds[j], LOW);
      delay(500); // Wait for 1000 millisecond(s)
    }
  }
  
}