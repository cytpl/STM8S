#ifndef __TIMER4_H
#define __TIMER4_H

#include <iostm8s003f3.h>

void TIMER4_Init(void);

static void(*TIMcallback)(void);

#endif
