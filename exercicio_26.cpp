#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
	
	setlocale(LC_ALL,"Portuguese");

int matriz[2][2];

int i, j; 
for(i =0; i<2;i++){
	for(j=0; j<2;j++){
		printf("Digite o valor da pos[%d][%d]: ", i,j);
		scanf("%d", &matriz[i][j]);
	}
}

printf("\n\n -------------------------------- \n\n");

for(i =0; i<2;i++){
	for(j=0; j<2;j++){
		printf(" %d", matriz[i][j]);
	
	}
	printf("\n");
	
}


	
	
	
	system("pause");
    return 0;
	
}
