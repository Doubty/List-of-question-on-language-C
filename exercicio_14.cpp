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
	printf("O aluno est� aprovado com m�dia: %.2f", media);
	}else if(media >= 3.5 && media < 7){
	printf("O aluno est� na final com m�dia: %.2f", media);
	float notaFinal = (50 - media *6)/4;
	printf("\nNota da quarta prova necess�ria: %.2f", notaFinal);
	
	float mediaFinal = (media *6 + notaFinal *4)/10;
     printf("\nM�dia final com essa nota: %.2f \n", mediaFinal);
     
	}else{
	printf("\nO aluno est� reprovado com m�dia: %.2f ", media);
	}
	
	system("pause");
	return 0;
}
