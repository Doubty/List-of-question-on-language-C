#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct  sPessoa{
	char nome[50]; 
	char sexo; 
	int idade;
	float peso; 
	float altura;
	
} tPessoa;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	tPessoa fichas[3]; 
	
	int i,j;
	for(i =0,j=1; i<3; i++,j++){
		
		printf("\n\n --- Cadastro da %dª pessoa --- \n",j);
	
		printf("Digite o seu nome completo: ");
		fgets(fichas[i].nome, 50, stdin);
		printf("Digite o seu sexo: (M/F): ");
		scanf("%c",  &fichas[i].sexo);
		printf("Digite a sua idade:");
		scanf("%d", &fichas[i].idade);
		printf("Digite o seu peso: ");
		scanf("%f", &fichas[i].peso);
		printf("Digite a sua altura: ");
		scanf("%f", &fichas[i].altura);
			fflush(stdin);
			printf("\n");
		
	}
	   
	  
		for(i =0,j=1; i<3; i++,j++){
		
		printf("\n\n --- Ficha da %dª pessoa --- \n");
	
		printf("\nNome: %s \nSexo: %c \nIdade: %d \nPeso: %.2f \nAltura:  %.2f ",fichas[i].nome, fichas[i].sexo, fichas[i].idade, fichas[i].peso,  fichas[i].altura  );
		
			printf("\n\n");
		
		

		
	}


	system("pause");
    return 0;
	
}
