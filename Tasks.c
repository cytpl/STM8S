#include "Tasks.h"

char buffer[255];
short id;
short Led;
int Usarttime,SPItime;

//timer interrupt fonksiyonu
void TIMfunc(void)
{
  Led++;//1ms de bir Led 1 artar
  Usarttime++;
  SPItime++;
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
   if(Led>200)
      {
        PB_ODR_bit.ODR5 = !PB_ODR_bit.ODR5; 
        Led=0;
      }
}

void UsartTask(void)
{
  if(Usarttime>1000)
  {
    SendString(buffer);
    Usarttime=0;
  }
}

void SPITask(void)
{
  if(SPItime>500)
  {
    SPI_SendByte('c');
    SPI_SendByte('y');
    SPI_SendByte('t');
    SPItime=0;
  }
}
