#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
    float conta1 = 100;
    float conta2 = 200;
    float valor;
	
	printf("Digite um valor para transferir:  ");
	
	scanf("%f", &valor);
	
	if(conta1 - valor >= 0){
		conta2 += valor;
			printf("O valor de %.2f foi transferido com sucesso!\n", valor);
	}else{
				printf("Saldo insuficiente para realizar transferência! \n");
	}
	
	system("pause");
	return 0;
}
