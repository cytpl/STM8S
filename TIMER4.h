#ifndef __TIMER4_H
#define __TIMER4_H

#include <iostm8s003f3.h>

void TIMER4_Init(void);
/*fonksiyon pointer fonksiyon adresi tutar interrupt larda 
fonksiyon çağırılıp değer döndürmek için kullanıldı*/
extern void(*TIMcallback)(void);

#endif
