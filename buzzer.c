#include <pic18f4550.h> /* Contains PIC18F4550 specifications */
#define Buzzer LATAbits.LATA5 /* Define buzzer pin */
unsigned int count = 0;
void __interrupt() Timer1_ISR(void)
{
    if (TMR1IF == 1)
    {
        // TMR1 = 0xCF2C;
        TMR1L = 0x20;
        TMR1H = 0xD1;
        count++;
        if (count >= 1000) // measure up to 1000 ms i.e. 1 second
        {
            Buzzer = ~Buzzer; /* Toggle buzzer pin */
            count = 0; // reset count
        }
        TMR1IF = 0; // clear Timer1 overflow flag
    }
}
void main(void)
{
    TRISB = 0; /* Set PORTB as output */
    TRISAbits.TRISA5 = 0; // set RA5 (buzzer pin) as output
    GIE = 1;   /* Enable Global Interrupt */
    PEIE = 1;  /* Enable Peripheral Interrupt */
    TMR1IE = 1; /* Enable Timer1 Overflow Interrupt */
    TMR1IF = 0; /* Enable 16-bit TMR1 register, 1:8 prescale, internal clock, timer OFF */
    T1CON = 0x31; // corrected comment syntax
    TMR1L = 0x20;
    TMR1H = 0xD1;
    TMR1ON = 1; /* Turn ON Timer1 */
    while (1);
}
