#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
	
	setlocale(LC_ALL,"Portuguese");

int Linhas = 2; 
int Colunas = 2;

  printf("Digite a quantidade de Linhas: ");
  scanf("%d", &Linhas);
  
  printf("Digite a quantidade de Colunas: ");
  scanf("%d", &Colunas);

 int **m = (int**) malloc(Linhas * sizeof(int*));   //Aloca um Vetor de Ponteiros
 int i,j;
 
  for (i = 0; i < Linhas; i++){ //Percorre as linhas do Vetor de Ponteiros
       m[i] = (int*) malloc(Colunas * sizeof(int)); //Aloca um Vetor de Inteiros para cada posição do Vetor de Ponteiros.
       for (j = 0; j < Colunas; j++){ //Percorre o Vetor de Inteiros atual.
           printf("Digite o valor da posição [%d][%d]: ", i,j);
           scanf("%d", &m[i][j]);
       }
  }
  
  
    for (i = 0; i < Linhas; i++){ 
       for (j = 0; j < Colunas; j++){
           printf(" %d ",  m[i][j] );
       }
       
       printf("\n");
  }
  



	
	
	
	system("pause");
    return 0;
	
}
