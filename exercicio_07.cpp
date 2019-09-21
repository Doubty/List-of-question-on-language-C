#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>


int main(){
	
int qtdRefri;
int qtdFatias;
int qtdPessoas;



 
  printf("Digite a quantidade de regrigerantes: ");
 scanf("%d",&qtdRefri);
 
 
   printf("Digite a quantidade de fatias: ");
 scanf("%d",&qtdFatias);
 
    printf("Digite a quantidade de pessoas: ");
 scanf("%d",&qtdPessoas);
 
 float totalSemTaxa = qtdRefri*1.50+qtdFatias*3.0;
  float totalComTaxa = (qtdRefri*1.50+qtdFatias*3.0)*1.10;
  float rateioPorPessoa = totalComTaxa/qtdPessoas;
 
 printf("-------------------------------------------\n");
 printf("Total sem taxa: %.2f R$ \n" , totalSemTaxa);
  printf("Total com taxa: %.2f R$ \n" , totalComTaxa);
   printf("Rateio por pessoa com taxa: %.2f R$ \n" , rateioPorPessoa);
 
 
 
	system("pause");
	
	return 0;
}
