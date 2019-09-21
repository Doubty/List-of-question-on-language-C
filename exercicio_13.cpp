#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3, media;
	
	printf("Digite o valor da primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite o valor da segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite o valor da terceira nota: ");
	scanf("%f", &nota3);
					
	media = (nota1+nota2+nota3)/3; 
	
	if(media >= 7){
	printf("O aluno está aprovado com média: %.2f", media);
	}else if(media >= 3.5 && media < 7){
	printf("O aluno está na final com média: %.2f", media);
	}else{
	printf("O aluno está reprovado com média: %.2f", media);
	}
	
	system("pause");
	return 0;
}
