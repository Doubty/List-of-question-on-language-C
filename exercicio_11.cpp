#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	printf("Digite um numero inteiro:  ");
	scanf("%d", &num);
	if(num%2 ==0){
			printf("O numero %d e par! \n", num);
	}else{
				printf("O numero %d e impar! \n", num);
	}
	
	system("pause");
	return 0;
}
