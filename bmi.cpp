/*
* Author: Jozef Radic
* Date: 20-09-2017
* Description:
*
*/
#include <stdio.h>
#include <math.h>

int main()
{

int pin=1234,pok=0,x;
printf("Insert pincode:");
scanf("%d",&x);
while(pin!=x && pok !=2){
						pok=pok+1;
						printf("Wrong pin try again");
						scanf("%d",&x);	
						}if(pin==x)
						 	{printf("Pin accepted");}
						else
						{printf("Card blocked");}	
}
   

