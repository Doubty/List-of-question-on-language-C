#include <stdio.h>

double fatorial(int n);
int main(void)
{
  int numero;
  double f;
  
  printf("Digite um numero para calcular o fatorial: ");
  scanf("%d",&numero);
  
  //chamada da função fatorial
  f = fatorial(numero);
  
  printf("Fatorial de %d = %.0lf",numero,f);
  

  return 0;
}

//Função recursiva que calcula o fatorial

double fatorial(int n)
{
  double vfat;
  
  if ( n <= 1 )
    return (1);
  else
  {
    //Chamada recursiva
    vfat = n * fatorial(n - 1);
    return (vfat);
  }
  
}
