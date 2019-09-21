#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>


int main(){
	
 int  idade; 
 float altura; 
 char letra; 
 char nome[50];
 
 printf("Digite o seu nome completo: ");
gets(nome);

 printf("Digite a primeira letra do seu nome: ");
 scanf("%c",&letra);
 
  printf("Digite a sua idade: ");
 scanf("%d",&idade);
 
  printf("Digite a sua altura: ");
 scanf("%f",&altura);
 
 printf("-------------------------------------------\n");
 printf(" Nome: %s \n letra do nome: %c \n Altura: %.2f \n Idade: %d \n", nome, letra, altura, idade);
 
 
 
	system("pause");
	
	return 0;
}
