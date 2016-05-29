#include "Tasks.h"

long Led;
unsigned char buffer[255];
short id;

void TIMfunc(void)
{
  Led++;
}

void USARTFunc(void)
{
  buffer[id] = UART1_DR;
   id++;
   if(id>255)
     id=0;
}

void LED(void)
{
   if(Led>100)
      {
        PB_ODR_bit.ODR5 = !PB_ODR_bit.ODR5;  
        Led=0;
      }
}
