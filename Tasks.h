#ifndef __TASKS_H
#define __TASKS_H

#include <iostm8s003f3.h>
#include "USART.h"
#include "SPI.h"

extern short Led,id;
extern int Usarttime;
extern int SPItime;
extern char buffer[255];

void TIMfunc(void);
void USARTFunc(void); 
void LED(void);
void UsartTask(void);
void SPITask(void);

#endif
