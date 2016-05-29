#include "Init.h"

void Initalize(void)
{
  #if (SPIInit)
    SPI_Init();
  #endif
    
#if (GPIOInit)
    GPIO_Init();
#endif
    
#if (UARTInit)
    UART_Init();
#endif
    
#if (TimerInit)
    TIMER4_Init();
#endif
}

void Clock_Init(void)
{
   CLK_ICKR_HSIEN = 1;
   while(!CLK_ICKR_HSIRDY);
   CLK_CKDIVR = 0x00;
}

