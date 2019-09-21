#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>


int main(){
	
float raio;


  printf("Digite o raio do circulo: ");
 scanf("%f",&raio);
 
 if(raio < 0){
 	  printf("O raio tem que ser maior que zero. Digite novamente o raio do circulo: ");
 scanf("%f",&raio);
 }
 
 float result  = 3.14f * (raio*raio);
 
 printf("-------------------------------------------\n");
 printf("Resultado: %.2f \n" , result);
 
 
 
	system("pause");
	
	return 0;
}
