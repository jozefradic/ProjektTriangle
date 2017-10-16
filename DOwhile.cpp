/*
* Author: Jozef Radic
* Date: 20-09-2017
* Description:
*
*/
#include <stdio.h>
#include <math.h>

int main () 
{
	int x=1,pok=0;
	printf("Cele cisla su:");
	do{
	printf("%d,",x); 
	x=x*2;
	pok=pok+1;
	  }
	while(pok<21);
}
