#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int somatorio(int n, int m){
	
	
	if(n==m){
	  return n;
	}else{
		
	   return n + somatorio(n+1,m);
	}
        
}

int main(){
	
	 int t1 = GetTickCount();
	 int result = somatorio(0,2);
	 int t2 = GetTickCount();
	 printf("(Função Recursiva) Resultado: %d \n", result);
	 printf("Tempo gasto: %d \n", t2-t1);
	 int i;
	 int n =0; 
	 int m = 2;
	 
	 t1 = GetTickCount();
	 for(i =n; i<=m; i++){
	     n = n+i;
	 }
	 t2 = GetTickCount();
	 
	 printf("(Função Iterativa) Resultado: %d \n", n);
	 printf("Tempo gasto: %d \n", t2-t1);
	 
	 
	system("pause");
	return 0;
}
