/*
 * Created: 09/03/2017 
 * Author: Shaswat Satapathy
 */

#include<avr/io.h>
int main()
{
    DDRC=0b00000000;
    DDRB=0b00011110;
    int x;
    while(1)
    {

    x=PINC & 0b00000111;
if(x==0)
PORTB=0b00001001;
if(x==1)
PORTB=0b00000001;
if(x==2)
PORTB=0b00001001;
if(x==3)
PORTB=0b00000101;
if(x==4)
PORTB=0b00001000;
if(x==5)
PORTB=0b00001001;
if(x==6)
PORTB=0b00001010;
if(x==7)
PORTB=0b00001001;
}
}
