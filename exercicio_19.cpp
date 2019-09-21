#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>



int main(){
	
	setlocale(LC_ALL, "Portuguese");
  int inicio, final;
  int test =1;	
   char senha[] = "galvao123";
   char senha2[16];
   
   	printf("\n (MAX 16 Caracteres) Digite a senha:  ");
	scanf("%s", &senha2);
	
   while(test == 1){
   
	if(strcmp(senha,senha2)==0){
		printf("Senha correta! \n \n Programa finalizado com while! \n \n");
		test =0;
	}else{
			printf("Senha incorreta! Digite novamente: ");
				scanf("%s", &senha2);
				
	}
	
}

test = 1;

   	printf("\n (MAX 16 Caracteres) Digite a senha:  ");
	scanf("%s", &senha2);

   do{
   
   
	if(strcmp(senha,senha2)==0){
		printf("Senha correta! \n \n Programa finalizado com Do-while! \n \n");
		test =0;
	}else{
			printf("Senha incorreta! Digite novamente: ");
				scanf("%s", &senha2);
				
	}
	
}while(test == 1);
	
	

     
   
	system("pause");
	return 0;
}
