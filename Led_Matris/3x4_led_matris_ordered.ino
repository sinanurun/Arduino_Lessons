// C++ code
//
int ledler [3][4];

void setup()
{
  int a;
  for(a = 2; a<=13; a++)
  pinMode(a, OUTPUT);
  int satir = 0;
  int sutun = 0;
  int led = 2;
  for(satir = 0; satir <3; satir++){
    for(sutun = 0; sutun <4; sutun++)
    {
      ledler [3][4]= led;
      led++;
    }
    }
}

void loop()
{

 int satir = 0;
  int sutun = 0;

  for(satir = 0; satir <3; satir++){
    for(sutun = 0; sutun <4; sutun++)
    {
     digitalWrite(ledler[satir][sutun],1);
    }
    }

      for(satir = 0; satir <3; satir++){
    for(sutun = 0; sutun <4; sutun++)
    {
     digitalWrite(ledler[satir][sutun],0);
    }
    }

  /*
  int i;
  for(i = 2; i<=13; i++){
  digitalWrite(i, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(i, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  }
  */
}
