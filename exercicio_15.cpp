#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
    int num;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
    
    switch(num){
    	case 1:  	printf("\n Um \n"); break;
		case 2:  	printf("\n Dois \n"); break;
	    case 3:  	printf("\n Tr�s \n"); break;
	    case 4:  	printf("\n Quatro \n"); break;
	   	case 5:  	printf("\n Cinco \n"); break;
    	default:    printf("\n Valor inv�lido! \n\n");
	}
	system("pause");
	return 0;
}
