#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int* inversa(int * vetor, int tamanho){
	
	
	int *  v = (int*) calloc(tamanho, sizeof(int));
	
	
	int i;
	int j = tamanho-1;
	
	for(i = 0; i<tamanho; i++){
		
		v[i] = vetor[j--]; 
	}
	
	
	return v;
	
}


int main(){
	
	setlocale(LC_ALL,"Portuguese");
 int numeros[] = {1,2,3,4,5,6};
 
int i,j;


printf("\n Vetor normal: \n");
for(i =0; i<6;i++){
	 printf(" %d ", numeros[i]);

}

printf("\n Vetor alterado: \n ");

int * vetorInverso = inversa(numeros, 6);

free(inversa(numeros, 6));

for(i =0; i<6;i++){
	 printf("%d ", vetorInverso[i]);

}

printf("\n");

	system("pause");
    return 0;
	
}
