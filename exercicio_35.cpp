#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>



int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n--- Manipulando arquivo CSV - questão 35 --- \n");
	
	char nome[] = "Galvao";
	int idade = 20; 
	float peso = 70;
	
	FILE * arquivo;
   arquivo = fopen("teste.csv","wt");
	
	
	if(arquivo==NULL){
		printf("Não foi possível ler o arquivo!");
		exit(0);
	}
	 
	
	fprintf(arquivo, "%s, %d, %f", nome, idade, peso);
	fclose(arquivo);
	
	  arquivo = fopen("teste.csv","rt");
	  
	  if(arquivo==NULL){
		printf("Não foi possível ler o arquivo!");
		exit(0);
	}
	
	fscanf(arquivo, "%s, %d, %f", &nome, &idade, &peso );
	
	printf("\nNome: %s Idade: %d Peso: %.2f \n", nome, idade, peso);
	fclose(arquivo);
	
	system("pause"); 
    return 0;
}
