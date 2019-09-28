#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
	
	setlocale(LC_ALL,"Portuguese");

int qtdElementos, bytes; int *meuPonteiro; 
 
printf("Digite o tamanho do seu vetor: "); 
scanf("%d", &qtdElementos); 

bytes = qtdElementos * sizeof(int); 
 
meuPonteiro = (int*) malloc( bytes );

 
 
int i,j;
for(i =0, j=1; i<qtdElementos;i++,j++){
	
	 printf("Digite o %d° valor: ", j);
	 scanf("%d", &meuPonteiro[i]);
}


for(i =0; i<qtdElementos;i++){
	 printf(" %d ", meuPonteiro[i]);

}


	
	
	
	system("pause");
    return 0;
	
}
