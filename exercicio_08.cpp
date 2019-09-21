#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>


int main(){
	
float num1;
float num2;




 
  printf("Digite o primeiro numero: ");
 scanf("%f",&num1);
 
 
   printf("Digite o segundo numero: ");
 scanf("%f",&num2);
 
 if(num2 ==0){
 	printf("Divisao por zero invalida! Digite outro numero: ");
 	 scanf("%f",&num2);
 }
 

 
float result = num1/num2;
 
 printf("-------------------------------------------\n");
 printf("Resultado: %.2f \n" , result);
 
 
 
	system("pause");
	
	return 0;
}
