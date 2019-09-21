#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"Portuguese");
 int numeros[] = {5,0,30,13,5,1};
 
 int maior, menor;
int i,j;


maior = numeros[0];
menor = numeros[0];
printf("\n Vetor normal: \n");

for(i =0; i<6;i++){
	 printf(" %d ", numeros[i]);
	  
	  if(maior < numeros[i]){
	  	  maior = numeros[i];
	  }
	 if(menor > numeros[i])
        menor = numeros[i];
}

printf("\nMaior: %d Menor: %d", maior, menor);



printf("\n");

	system("pause");
    return 0;
	
}
