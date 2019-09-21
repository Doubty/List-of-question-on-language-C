#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>


int main(){
	
float altura;
float peso;




 
  printf("Digite a sua altura: ");
 scanf("%f",&altura);
 
 
   printf("Digite o seu peso: ");
 scanf("%f",&peso);
 
 

 
float imc = peso / (altura*altura);
 
 printf("-------------------------------------------\n");
 printf("Resultado: %.2f \n" , imc);
 
 
 
	system("pause");
	
	return 0;
}
