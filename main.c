#include "main.h"
#include "Tasks.h"

int main( void )
{  
   // InitClock();
    Initalize();
    TIMcallback=&TIMfunc;
    Usartcallback=&USARTFunc;

    __enable_interrupt();
    while (1)
    {
     	LED();          
    }
}

