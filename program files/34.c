#include< reg51.h>

void delay()
{
int count=0;
 while(count!=250)
  {
   TMOD=0x01;  //16-bit timer0 selected
   TH0=0xF8;   // Loading high byte in TH
   TL0=0xCC;   // Loaded low byte in TL
   TR0=1;      // Running the timer
    while(!TF0);   //Checking the timer flag register if it is not equal to 1 
   TR0 = 0;      // If TF0=1 stop the timer
   TF0 = 0;      // Clear the Timer Flag bit for next calculation

   count++;
  }}
void main()
{
P1=0x00;
while(1){
delay();	
P1=0xCF;	delay();
P1=0xA4;	delay();	
P1=0xB0;        delay();	
P1=0x99;	delay();
P1=0x92;	delay();	
P1=0x82;        delay();	
P1=0xF8;	delay();
P1=0x00;	delay();	
P1=0x98;        delay();	
P1=0x88;	delay();
P1=0x00;	delay();	
P1=0xC6;        delay();	
P1=0xC0;	delay();
P1=0x86;	delay();	
P1=0x8E;         
}
}