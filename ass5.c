#include <pic18f4550.h>
void delay (unsigned int time) {
  for (i=0;i<time;i++);
  for (j=0;j<5000;j++);
}
void main (void) {
  TRISB = 0X00;
  LATB = 0XFF;
  while(1) {
    LATB = ~LATB;
    delay(200);
  }
}
