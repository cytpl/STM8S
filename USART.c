#include "USART.h"

void(*Usartcallback)(void);
//Usart initalize fonk.
void UART_Init(void)
{
  UART1_BRR2  = 0x0A;
  UART1_BRR1  = 0x08;
  UART1_CR2_REN  = 1;
  UART1_CR2_TEN  = 1;
  UART1_CR2_RIEN = 1;
}
//1 karakter gönderme fonksiyonu
void SendByte(char i)
{
  while(UART1_SR_TXE!=1);
  UART1_DR = i;
}
 //String gönderme fonksiyonu
void SendString(char *s)
{
   while(*s)
      SendByte(*s++);
}
//Usart interruptı
#pragma vector=UART1_R_RXNE_vector
__interrupt void uart1_RX_ISR(void)
{
   Usartcallback();
}
