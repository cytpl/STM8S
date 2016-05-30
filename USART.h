#ifndef __USART_H
#define __USART_H

#include <iostm8s003f3.h>

extern void(*Usartcallback)(void);
void UART_Init(void);
void SendByte(char i);
void SendString(const char *s);

#endif
