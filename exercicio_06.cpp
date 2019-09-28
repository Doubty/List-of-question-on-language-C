#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>


int main(){
	
float num1;
float num2;
float num3;



 
  printf("Digite o primeiro numero: ");
 scanf("%f",&num1);
 
 
   printf("Digite o segundo numero: ");
 scanf("%f",&num2);
 
    printf("Digite o terceiro numero: ");
 scanf("%f",&num3);
 
float media = (num1+num2+num3)/3;
 
 printf("-------------------------------------------\n");
 printf("Media: %.2f \n" , media);
 
 
 
	system("pause");
	
	return 0;
}
