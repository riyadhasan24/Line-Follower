int IN_1 = 11;
int IN_2 = 10;

int IN_3 = 6;
int IN_4 = 5;

int Speed = 55;

int Left_Sensor = A1; 
int Right_Sensor = A0; 

void setup()
  {
    pinMode(IN_1, OUTPUT);
    pinMode(IN_2, OUTPUT);
 
    pinMode(IN_3, OUTPUT);
    pinMode(IN_4, OUTPUT);
 
    pinMode(Left_Sensor, INPUT);
    pinMode(Right_Sensor, INPUT);
  }

void loop()
{
          if ((digitalRead(Left_Sensor) == LOW)&&(digitalRead(Right_Sensor) == LOW))
              {
                 Rover_ForWard();
              }
              
          if ((digitalRead(Left_Sensor) == LOW)&&(digitalRead(Right_Sensor) == HIGH))
              {
                 Rover_RightWard();
              }
              
          if ((digitalRead(Left_Sensor) == HIGH)&&(digitalRead(Right_Sensor) == LOW))
              {
                 Rover_LeftWard();
              }
              
          if ((digitalRead(Left_Sensor) == HIGH)&&(digitalRead(Right_Sensor) == HIGH))
             {
                  Rover_Stop();
             }
}       


  void Rover_Stop()
    {
      analogWrite(IN_1, LOW);
      analogWrite(IN_2, LOW);
      analogWrite(IN_3, LOW);
      analogWrite(IN_4, LOW);  
    }

  void Rover_ForWard()
    {
      analogWrite(IN_1, Speed);
      analogWrite(IN_2, LOW);
      analogWrite(IN_3, Speed);
      analogWrite(IN_4, LOW);  
    }
 


  void Rover_RightWard()
    {
      analogWrite(IN_1, LOW);
      analogWrite(IN_2, LOW);
      analogWrite(IN_3, Speed);
      analogWrite(IN_4, LOW);  
    }

  void Rover_LeftWard()
    {
      analogWrite(IN_1, Speed);
      analogWrite(IN_2, LOW);
      analogWrite(IN_3, LOW);
      analogWrite(IN_4, LOW);     
    }
