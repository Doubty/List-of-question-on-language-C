#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
	
	setlocale(LC_ALL,"Portuguese");
 int numeros[3]; 
 
int i,j;

for(i =0, j=1; i<3;i++,j++){
	
	 printf("Digite o %d° valor: ", j);
	 scanf("%d", &numeros[i]);
}


for(i =0; i<3;i++){
	 printf(" %d ", numeros[i]);

}


	
	
	
	system("pause");
    return 0;
	
}
