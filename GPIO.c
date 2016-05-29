#include "GPIO.h"

void GPIO_Init(void)
{
    PB_ODR = 0; //Turn off all pins
    PB_DDR_DDR5 = 1; //PortB, Bit 5 is output (PB5 - Data Direction Register)
    PB_CR1_C15 = 1; //PortB, Control Register 1, Bit 5 (PB5) set to Push-Pull
    PB_CR2_C25 = 1; //PortB, Control Register 2, Bit 5 (PB5) set to Push-Pull
}
