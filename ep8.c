#include <stdio.h>
#include <string.h>

main(){

    char palavraBusca[26];
    char fraseUsuario[501];
    int ocorrencias=0;
    int tamanhoFrase;
    int tamanhoPalavra;
    int i=0;
    int j=0;
    int controleSequencial=0;
    int contadorFalso=0;

    printf("Escreva a palavra a ser buscada: ");
    gets(palavraBusca);
    printf("\nEscreva uma frase contendo do maximo 500 caracteres: ");
    gets(fraseUsuario);

    tamanhoFrase = strlen(fraseUsuario);
    tamanhoPalavra = strlen(palavraBusca);


    for (i = 0;i < tamanhoFrase;i++){

        if (fraseUsuario[i] == palavraBusca[0]){
           controleSequencial = 0;
           contadorFalso = i;

           for (j=0; j<tamanhoPalavra; j++){

               if (palavraBusca[j] == fraseUsuario[contadorFalso]){
                  controleSequencial++;
               }

               contadorFalso++;
           }

           if (controleSequencial>=tamanhoPalavra){
              ocorrencias++;
           }
        }
    }

    printf("\n\nA palavra ocorre %d vezes no texto informado.", ocorrencias);

    system("pause>>log");

}
