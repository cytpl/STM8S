#include "main.h"
#include "Tasks.h"

int main( void )
{  
   // InitClock();
    Initalize();//Tüm init fonk. çağıran fonk.
    TIMcallback=&TIMfunc;// Timer interruptında çalışacak fonksiyon adresi yüklemesi
    Usartcallback=&USARTFunc;// Usart interruptında çalışacak fonksiyon adresi yüklemesi

    __enable_interrupt();//interrupt ları aç
    while (1)
    {
     	LED();          
    }
}

