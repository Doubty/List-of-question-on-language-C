#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int fatorial(int num){
	
	int i;
	int fat = num;
	if(num == 1 || num ==0){
	 printf("Fatorial: 1");
	}else{

	for(i=2; i<num; i++){
		fat = fat * i; 
	}
	
	 printf("Fatorial: %d \n \n", fat);
	
}
	

}


int main(){
	
	
	setlocale(LC_ALL, "Portuguese");

	
	int op; 
  float result;
   float num;
	
	do{
		printf(" 1 - Potencia��o\n 2 - Raiz Quadrada\n 3 - Fatorial\n 0 - Sair.\nOp��o: ");
		scanf("%d",&op);
		switch(op){
			case 1:   
			 float base;
	         int exp;
			 printf("\n------Potencia��o------\nDigite a base: ");
			 scanf("%f", &base);
			  printf("\nDigite o expoente: ");
			 scanf("%d", &exp);
			 result = pow(base, exp);
			  printf("\nResultado: %f \n \n", result);	
			break;

			case 2:  
		      
			 printf("\n------Raiz Quadrada------\nDigite um n�mero: ");
			 scanf("%f", &num);
			  result = sqrt(num);
			  printf("\nResultado: %f \n \n", result);
			  
			 break;
			 
			 
			 	case 3:  
		      
			 printf("\n------Fatorial------\nDigite um n�mero: ");
			 scanf("%f", &num);
		     fatorial(num);
			  
			 break;
			 
			 case 0:
			 	printf("\n Programa finalizado! \n");
			  break; 
			  
			 default: 
			 printf("Op��o inv�lida!");
		}
	}while(op!=0);
	
	system("pause");
	
	return 0;
}
