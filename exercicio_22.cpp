#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	int test = 0;
	int i;
	
	for(i =2; i<num; i++){
		
		if(num%i==0){
		   test = 1;	
		}
	}
	
	if(!test){
		printf("O n�mero %d � primo \n", num);
	}else{
				printf("O numero %d n�o � primo \n", num);
	}
	
	
	system("pause");
	return 0;
}
