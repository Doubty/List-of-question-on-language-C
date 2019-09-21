#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>


int main(){
	
int num1;
int num2;
int num3;



 
  printf("Digite o primeiro numero: ");
 scanf("%d",&num1);
 
 
   printf("Digite o segundo numero: ");
 scanf("%d",&num2);
 
    printf("Digite o terceiro numero: ");
 scanf("%d",&num3);
 
int media = (num1+num2+num3)/3;
 
 printf("-------------------------------------------\n");
 printf("Media: %d \n" , media);
 
 
 
	system("pause");
	
	return 0;
}
