int led_r1=13, led_y1=12, led_g1=11;
int led_r2=10, led_y2=9, led_g2=8;
int time1=10000;
int time2=2000;
int time3=500;
int timer_time=0;


void setup()
{                
  pinMode(led_r1, OUTPUT);
  pinMode(led_y1, OUTPUT);
  pinMode(led_g1, OUTPUT);
  pinMode(led_r2, OUTPUT);
  pinMode(led_y2, OUTPUT);
  pinMode(led_g2, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  for (timer_time=0; timer_time < 10; timer_time++)
  {
    if (timer_time <= 5)
    {
//Phase 0
      digitalWrite(led_g1,HIGH);
      digitalWrite(led_r2,HIGH);
      delay(time1);
      digitalWrite(led_g1,LOW);
//Phase 0 Blinken
      delay(time3);
      digitalWrite(led_g1,HIGH);
      delay(time3);
      digitalWrite(led_g1,LOW);
      delay(time3);
      digitalWrite(led_g1,HIGH);
      delay(time3);
      digitalWrite(led_g1,LOW);
      delay(time3);
      digitalWrite(led_g1,HIGH);
      delay(time3);
      digitalWrite(led_g1,LOW);
//Phase 1
      digitalWrite(led_y1,HIGH);
      delay(time2);
      digitalWrite(led_y1,LOW);
//Phase 2
      digitalWrite(led_r1,HIGH);
      delay(time3);
//Phase 3
      digitalWrite(led_r2,LOW); //OHNE GR
      digitalWrite(led_y2,HIGH);
      delay(time2);
      digitalWrite(led_y2,LOW);
    //digitalWrite(led_r2,LOW);
//Phase 4
      digitalWrite(led_g2,HIGH);
      delay(time1);
      digitalWrite(led_g2,LOW);
//Phase 4 Blinken
      delay(time3);
      digitalWrite(led_g2,HIGH);
      delay(time3);
      digitalWrite(led_g2,LOW);
      delay(time3);
      digitalWrite(led_g2,HIGH);
      delay(time3);
      digitalWrite(led_g2,LOW);
      delay(time3);
      digitalWrite(led_g2,HIGH);
      delay(time3);
      digitalWrite(led_g2,LOW);
//Phase 5
      digitalWrite(led_y2,HIGH);
      delay(time2);
      digitalWrite(led_y2,LOW);
//Phase 6
      digitalWrite(led_r2,HIGH);
      delay(time3);
//Phase 7
      digitalWrite(led_r1,LOW); //OHNE GR
      digitalWrite(led_y1,HIGH);
      delay(time2);
      digitalWrite(led_y1,LOW);
    //digitalWrite(led_r1,LOW);
      digitalWrite(led_r2,LOW);
    }
    
    if (timer_time > 5)
    {
      digitalWrite(led_y1,HIGH);
      digitalWrite(led_y2,HIGH);
      delay(time3);
      digitalWrite(led_y1,LOW);
      digitalWrite(led_y2,LOW);
      delay(time3);
      digitalWrite(led_y1,HIGH);
      digitalWrite(led_y2,HIGH);
      delay(time3);
      digitalWrite(led_y1,LOW);
      digitalWrite(led_y2,LOW);
      delay(time3);
      digitalWrite(led_y1,HIGH);
      digitalWrite(led_y2,HIGH);
      delay(time3);
      digitalWrite(led_y1,LOW);
      digitalWrite(led_y2,LOW);
      delay(time3);
      digitalWrite(led_y1,HIGH);
      digitalWrite(led_y2,HIGH);
      delay(time3);
      digitalWrite(led_y1,LOW);
      digitalWrite(led_y2,LOW);
      delay(time3);
      digitalWrite(led_y1,HIGH);
      digitalWrite(led_y2,HIGH);
      delay(time3);
      digitalWrite(led_y1,LOW);
      digitalWrite(led_y2,LOW);
      delay(time3);
      digitalWrite(led_y1,HIGH);
      digitalWrite(led_y2,HIGH);
      delay(time3);
      digitalWrite(led_y1,LOW);
      digitalWrite(led_y2,LOW);
      delay(time3);
      digitalWrite(led_y1,HIGH);
      digitalWrite(led_y2,HIGH);
      delay(time3);
      digitalWrite(led_y1,LOW);
      digitalWrite(led_y2,LOW);
      delay(time3);
      digitalWrite(led_y1,HIGH);
      digitalWrite(led_y2,HIGH);
      delay(time3);
      digitalWrite(led_y1,LOW);
      digitalWrite(led_y2,LOW);
      delay(time3);
      digitalWrite(led_y1,HIGH);
      digitalWrite(led_y2,HIGH);
      delay(time3);
      digitalWrite(led_y1,LOW);
      digitalWrite(led_y2,LOW);
      delay(time3);
      digitalWrite(led_y1,HIGH);
      digitalWrite(led_y2,HIGH);
      delay(time3);
      digitalWrite(led_y1,LOW);
      digitalWrite(led_y2,LOW);
      delay(time3);
      digitalWrite(led_y1,HIGH);
      digitalWrite(led_y2,HIGH);
      delay(time3);
      digitalWrite(led_y1,LOW);
      digitalWrite(led_y2,LOW);
      delay(time3);
      digitalWrite(led_y1,HIGH);
      digitalWrite(led_y2,HIGH);
      delay(time3);
      digitalWrite(led_y1,LOW);
      digitalWrite(led_y2,LOW);
      delay(time3);
    }
    
    if (timer_time == 10)
    {
      timer_time = 0;
    }
  }

//Zeitsteuerung 11Uhr gelbleuchten
  
}
