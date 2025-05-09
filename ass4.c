#include <pic18f4550.h>
void main (void) {
  int num1 = 0x02;
  int num2 = 0x03;
  int result = 0;
  int i;

  for (i=1;i<=num2;i++) {
    result = result + num1;
  }
  TRISB = 0;
  PORTB = result;
}
