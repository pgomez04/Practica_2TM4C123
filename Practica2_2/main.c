
#include "lib/include.h"

unsigned long Led;
uint32_t delay;
int main(void){

  SysTick_Init();
  SysTick_Wait();
   SysTick_Wait10ms();

  while(1){
   //if(PF4 == 0x0){
    Led = 0x02;            // reverse value of LED
    GPIOF->DATA = Led;   // write value to PORTF DATA register,toggle led
    Delay();
    Led = 0x04;            // reverse value of LED
    GPIOF->DATA = Led;   // write value to PORTF DATA register,toggle led
    Delay();
    Led = 0x08;            // reverse value of LED
    GPIOF->DATA = Led;   // write value to PORTF DATA register,toggle led
    Delay();
    Led = 0x0A;            // reverse value of LED
    GPIOF->DATA = Led;   // write value to PORTF DATA register,toggle led
    Delay();
   // }
  }
}
