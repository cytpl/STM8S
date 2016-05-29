#include "TIMER4.h"

long a;

void TIMER4_Init(void)//1ms timer interrupt ayarı
{
  TIM4_CR1_ARPE = 1;
  TIM4_IER_UIE  = 1; 
  TIM4_PSCR     = 0x07; 
  TIM4_ARR      = 0x7D; 
  TIM4_CR1_CEN = 1;
}

#pragma vector=TIM4_OVR_UIF_vector
__interrupt void Timer4_ISR(void)
{
  TIM4_SR_UIF = 0;
  //TIMcallback fonk. fonksiyon pointer 
  //interrupt içine eşitlendiği fonksiyonun çağrılmasını sağlar.
  TIMcallback();
}
