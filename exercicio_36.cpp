#include <stdio.h>
#include <string.h>

int main(void){

    int quantidade = 0;
    char palavra[30];
    int i, j;
    char letra;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for(letra = 'a'; letra <= 'z'; letra++)
    {
        for(i = 0; palavra[i]; i++){
            if(palavra[i] == letra){
                quantidade += 1;
            }
        }

        if(quantidade > 0){
                printf("%c = %d \n", letra, quantidade);
        }
        quantidade = 0;
    }

    //system("pause");
    return 0;
}
