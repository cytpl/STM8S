#include "Tasks.h"

long Led;
unsigned char buffer[255];
short id;

//timer interrupt fonksiyonu
void TIMfunc(void)
{
  Led++;//1ms de bir Led 1 artar 
}
//Usart interrupt fonksiyonu
void USARTFunc(void)
{
  buffer[id] = UART1_DR;
   id++;
   if(id>255)
     id=0;
}
//Led blink fonksiyonu
void LED(void)
{
   if(Led>100)
      {
        PB_ODR_bit.ODR5 = !PB_ODR_bit.ODR5;  
        Led=0;
      }
}
