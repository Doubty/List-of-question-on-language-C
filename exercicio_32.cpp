#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>



int main(){
	
	setlocale(LC_ALL,"Portuguese");
  
  char frase[50];
  
  
  printf("Digite uma frase: "); 
  fgets(frase, 50, stdin);
  
  int i;

char * fraseNova = (char*) calloc(strlen(frase), sizeof(char)); 

int j;

for(i =strlen(frase)-1, j=0 ; i >=0; i--,j++){
	
	fraseNova[j] = frase[i];	       
    
}

fraseNova[strlen(frase)] = '\0';

   printf("%s", fraseNova);






printf("\n");

	system("pause");
    return 0;
	
}
