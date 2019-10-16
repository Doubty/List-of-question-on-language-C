#include <stdio.h>
#include <string.h>

int main(void){

    char frase[100];
    int letras;
    
    //Ponteiro para trabalhar com arquivos
    FILE * arquivo;

    arquivo = fopen("teste1.txt", "a");

    if(arquivo == NULL){
        printf("Arquivo nao aberto");
        return 0;
    }

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    char * ptr = strtok(frase, " ");
         
    while( ptr != NULL)
    {
        fprintf(arquivo ,"%s\n", ptr);
        ptr = strtok(NULL, " ");
    }

    fclose(arquivo);
    //system("pause");
    return 0;
}
