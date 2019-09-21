#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int delta(int a, int b, int c){
	
	 int delta = b*b +(-4 *a*c);
	 
	 return delta;
}

void raiz(int a, int b, int c){
	
	float x1 = float((-b + sqrt(delta(a,b,c))))/2.0F*a;
	float x2 = float((-b - sqrt(delta(a,b,c))))/2.0F*a;
	
		printf(" \n -----Raizes----- \n X1: %.2f X2: %.2f ", x1, x2);

	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
    int a,b,c;
	
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	printf("Digite o valor de c: ");
	scanf("%d", &c);
    
    if(delta(a,b,c) < 0){
    		printf("Raizes são complexas, não calculado! \n");
	}
	
	raiz(a, b, c);
   
	system("pause");
	return 0;
}





