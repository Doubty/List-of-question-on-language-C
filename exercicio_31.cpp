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

for(i =strlen(frase) ; i >=0; i--){
	
	
	       printf("%c", frase[i]);
    
}






printf("\n");

	system("pause");
    return 0;
	
}
