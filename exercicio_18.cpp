#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>



int main(){
	
	setlocale(LC_ALL, "Portuguese");
  int inicio, final;
	
	// preguiça de fazer o teste de diferença de intervalos, então só aviso aqui abaixo.
	printf("\n OBS: Inicial > Final \nDigite o valor inicial: ");
	scanf("%d", &inicio);
	printf("Digite o valor final: ");
	scanf("%d", &final);
	
	int i; 
		printf("\n\nCom for:");
	for(i=inicio; i<= final; i++){
		if(i%2!=0){
			printf(" %d ", i);
		}
	}
		printf("\n\n");
	
		printf("Com while: ");
		
		i = inicio;
		
      while(i <= final){
      		if(i%2!=0){
			printf(" %d ", i);
		}
      		i++;
	  }
     		printf("\n\n");
     		
     	printf("Com  Do-while: ");
		
		i = inicio;
		
     do{
     	if(i%2!=0){
			printf(" %d ", i);
		}
      		i++;
	 }while(i <= final);
     		printf("\n\n");
     
   
	system("pause");
	return 0;
}
