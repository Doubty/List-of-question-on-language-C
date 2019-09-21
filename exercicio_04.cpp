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
 
 float soma = num1+num2;
 float subtracao = num1 -num2;
 float multiplicacao = num1*num2;
 float quociente = num1/num2;
 int resto = int (num1)% int(num2);
 
 printf("-------------------------------------------\n");
 printf(" Soma: %.2f \n Subtracao: %.2f\n multiplicacao: %.2f \n quociente: %.2f \n resto: %d \n", soma, subtracao, multiplicacao, quociente, resto);
 
 
 
	system("pause");
	
	return 0;
}
