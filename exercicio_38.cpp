#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

    char frase[100];
    char copia[100];
    int qtd_palavras = 0, tam_palavra = 0;

    printf("Digite uma frase qualquer: ");
    scanf("%[^\n]s", &frase);

    strcpy(copia, frase);

    char * ptr = strtok(frase, " ");

    while(ptr != NULL){
        if(strlen(ptr) > tam_palavra){
            tam_palavra = strlen(ptr);
        }
        ptr = strtok(NULL, " ");
        qtd_palavras++;
    }

    char ** palavras = (char **) malloc(qtd_palavras * sizeof(char * ));

    ptr = strtok(copia, " ");

    for(int i = 0; i < qtd_palavras; i++){
        palavras[i] = ptr;
        ptr = strtok(NULL, " ");
    }

    for(int i = 0, j = 1; i < qtd_palavras; i++){
        int rep = 0;
        for(int j = 0; j < qtd_palavras; j++){
            if(!strcmp(palavras[i], palavras[j])){
                rep++;
                if(rep > 1){
                    palavras[j][0] = 0;
                }
            }
        }
        if(palavras[i][0] != 0){
            printf("%s = %d \n", palavras[i], rep);
        }
    }

    free(palavras);
    //system("pause");
    return 0;
}
