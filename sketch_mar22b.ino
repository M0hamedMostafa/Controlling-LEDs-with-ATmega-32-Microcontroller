#include <avr/io.h>


int main(void)
{

DDRB &= ~(1<<0);

DDRB &= ~(1<<1);
DDRC |=(1<<0);

DDRC |=(1<<1);
 while(1){

   if(PINB & (1<<0))
  {
    PORTC |= (1<<0);
  }
    else{
      PORTC &= ~(1<<0);
    }if(PINB & (1<<1))
  {
    PORTC |= (1<<1);
    }
    else{
      PORTC  &= ~(1<<1);
    }
 }
  }