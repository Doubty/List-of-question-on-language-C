#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>



int main(){
	
	setlocale(LC_ALL, "Portuguese");
  int inicio, final;
	

	printf("\n OBS: Inicial > Final \nDigite o valor inicial: ");
	scanf("%d", &inicio);
	printf("Digite o valor final: ");
	scanf("%d", &final);
	
	int i; 
	int soma=0;
	for(i=inicio; i<= final; i++){
	   soma = soma+i;
	}
	
	printf("\n Soma: %d \n", soma);


     
   
	system("pause");
	return 0;
}
