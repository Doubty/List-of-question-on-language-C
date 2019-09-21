#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"Portuguese");
 int numeros[] = {5,0,30,13,5,1};
 
int i,j;

j = 6-1;
printf("\n Vetor normal: \n");

for(i =0; i<6;i++){
      
      
      numeros[i] = numeros [j-i];
}


for(i =0; i<6;i++){
      
    printf(" %d ", numeros[i]);
}





printf("\n");

	system("pause");
    return 0;
	
}
