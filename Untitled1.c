//No principio, apenas duas pessoas sabiam o que estavam fazendo neste código
//Eu e Deus.
//Agora, só Deus sabe.


/*

Programa Lê uma palavra e uma frase e identifica quantas vezes a palavra especificada
ocorre na frase.

*/
#include <stdio.h>
#include <string.h>

main(){
    // Variáveis, nada novo sobre o sol.
    char palavraBusca[25];
    char fraseUsuario[500];
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
    
    //Hora dos Vetores

    for (i = 0;i < tamanhoFrase;i++){ //Vetor principal, aka Engine
        
        //Verifica a primeira letra da frase do usuário, caso ela seja igual ao item 0 da palavra buscada pela
        //engine, ele pula pra próxima.
        if (fraseUsuario[i] == palavraBusca[0]){
           controleSequencial = 0;
           contadorFalso = i;
           //Aqui a gente verifica se a palavra bate com a frase
           for (j=0; j<tamanhoPalavra; j++){
               
               if (palavraBusca[j] == fraseUsuario[contadorFalso]){
                  controleSequencial++;
               }
               
               contadorFalso++;
           }
            //Esse é o check do loop, caso ele identifique que a palavra buscada bateu com a palavra no texto ele adiciona
            // 1 as ocorrências daquela palavra no texto.
           
           if (controleSequencial>=tamanhoPalavra){
              ocorrencias++;
           }
        }
    }
    
    printf("\n\nA palavra ocorre %d vezes no texto informado.", ocorrencias);
    
    system("pause>>log");

}

