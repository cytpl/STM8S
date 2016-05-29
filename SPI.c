#include "SPI.h"

void SPI_Init(void)
{ 
  SPI_CR1_LSBFIRST = 0;   //MSB is transmitted First
  SPI_CR1_BR = 3;         //SPI_Baudrate = fmaster/16
  SPI_CR1_CPOL = 0;       //SCK to 0 when idle
  SPI_CR1_CPHA = 0;       //The first transition is the first data capture edge
  SPI_CR2_BDM = 0;        //line Unidirectional data mode selected
  SPI_CR2_RXONLY = 0;     //Full Duplex  
  SPI_CR1_MSTR = 1;       //Master Configuration
  SPI_CR1_SPE=1;           //SPI Enable
}
void SPI_SendByte(char i)
{
 
   SPI_DR = i;             // SPI Data register ına veriyi yaz 
   while(!SPI_SR_TXE);     // TX Buffer boşalana kadar bekle
   SPI_SR_TXE = 0;         // Bayrağı temizle
   while(SPI_SR_BSY);      // SPI meşgul ise bekle
}
