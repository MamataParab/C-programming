const int stepPin = 3; 
const int dirPin = 4;
#define TRUE 1
#define FALSE 0
#include<stdio.h>
//const int analogPin=A0;
int Value=0;

void setup()
{
  // Sets the two pins as Outputs
  //pinMode(stepPin,OUTPUT); 
  //pinMode(dirPin,OUTPUT);
 //Serial.begin(9600);
}

  void Clockwise()
  {
    //digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
    for(int x = 0; x < 2000; x++)
    {
      printf("Clockwise\n");
      //digitalWrite(stepPin,HIGH); 
      //delay(5);
      //digitalWrite(stepPin,LOW); 
      //delay(5); 
    }
  
  }

  void AntiClockwise()
  {
     // digitalWrite(dirPin,LOW);
      for(int x=0;x<2000;x++)
      {
        printf("AntiClockwise\n");
        //digitalWrite(stepPin,HIGH);
        //delay(2.5);
        //digitalWrite(stepPin,LOW);
        //delay(2.5);
      }
  }
  int main()
  {
    scanf("%d",&Value);
    if(Value==TRUE)
    {
      Clockwise();
    }
    else
    {
      AntiClockwise();
    }
    return 0;
  }

