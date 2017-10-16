/*
* Author: Jozef Radic
* Date: 20-09-2017
* Description:
*
*/
#include <stdio.h>
#include <math.h>

int main(){

   
int a=7;
int b=9;
int ans;
   printf("How much is %d * %d",a,b);
   printf("\nYour answer: ");
   scanf("%d", &ans);
   while(ans !=a*b){
   		printf("No! Wrong answer,guess again: ");
   		scanf("%d", &ans);
   				   }
   
   printf("Well ! Correct answer");
		  
		  
		  
		  }
