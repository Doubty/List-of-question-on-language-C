#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>



int main(){
	
	setlocale(LC_ALL, "Portuguese");
  int num;
	

	printf("\n Digite um n�mero para calcular o fatorial: ");
	scanf("%d", &num);

	
	int i; 
	int fat = num;
	if(num ==1 || num ==0){
			printf("Fatorial de %d �: 1 \n \n",num);
	}else{

	for(i=2; i< num; i++){
	   fat = fat*i;
	}
	
	printf("\n Fatorial de %d �: %d \n", num, fat);
	
		}


     
   
	system("pause");
	return 0;
}
