#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	int test = 0;
	int i;
	
	for(i =2; i<num; i++){
		
		if(num%i==0){
		   test = 1;	
		}
	}
	
	if(!test){
		printf("O número %d é primo \n", num);
	}else{
				printf("O numero %d não é primo \n", num);
	}
	
	
	system("pause");
	return 0;
}
