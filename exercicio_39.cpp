#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct palavra{
    char * ptr;
    unsigned int qtd;
}palavra;

int main(void){
    
    char frase[100];
    int qtdPalavras = 0;
    
    //Ponteiro para trabalhar com arquivos
    FILE * arquivo;

    arquivo = fopen("teste1.txt", "r");

    if(arquivo == NULL){
        printf("Arquivo nao aberto");
        return 0;
    }
        
    while(fgets(frase, 100, arquivo))
    {
        qtdPalavras++;
    }

    palavra palavras[qtdPalavras];

    rewind(arquivo);    

    for(int i = 0; i < qtdPalavras; i++){
        fgets(frase, 100, arquivo);
        frase[strlen(frase)-1] = 0;
        palavras[i].ptr = (char * ) malloc(sizeof(char) * (strlen(frase) + 1));
        strcpy(palavras[i].ptr, frase);
        palavras[i].qtd = 1;
    }
    
    for(int i = 0; i < qtdPalavras; i++){
        for(int j = i + 1; j < qtdPalavras; j++){
            if(!strcmp(palavras[i].ptr, palavras[j].ptr)){
                //printf("%s = %s \n", palavras[i].ptr, palavras[j].ptr);
                palavras[j].ptr[0] = 0;
                palavras[i].qtd += 1;
                
            }
        }
    } 
    
    for(int i = 0; i < qtdPalavras; i++){
        if(palavras[i].ptr[0] != 0){
            printf("%s = %d\n", palavras[i].ptr, palavras[i].qtd);
        }
    }

    fclose(arquivo);
    //system("pause");
    return 0;
}

