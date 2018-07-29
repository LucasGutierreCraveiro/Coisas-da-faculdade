#include<stdio.h>
#include<string.h>

int ler_sexo (char x){
    while( x != 'M' && x != 'F'){
           printf("\n\nSexo Invalido! Precisa ser 'M' ou 'F'.\n");
           scanf(" %c",&x);
    }
    if (x == 'M' || x == 'F'){
        return x;
    }
}

int ler_idade (int x) {
    while (x < 0 || x > 122){
        printf("\n\nIdade Invalida! Precisa estar entre 0 e 122. \n");
        scanf("%d",&x);
    }
    if (x > 0 && x < 122){
        return x;
    }   
}


int ler_nota (float x) {
    while (x < 0 || x > 10){
        printf("\n\nNota Invalida! Precisa estar entre 0 e 10.\n");
        scanf("%f",&x);
    }
    if (x > 0 && x <= 10){
        return x;
    }
}

int main ()

{
    float nota;
    char sexo;
    int idade;
    int i=0;

    for (i=0;i < 3;i++){
        
        printf("\n\n====== Entre os dados do Aluno %d\n",i+1);
        printf("===================================\n\n");
        printf("=== Entre com a idade:\n");
        
        scanf("%d",&idade);
        idade = ler_idade(idade);
        
        printf("=== Entre com o sexo:\n");
        
        scanf(" %c",&sexo);
        sexo = ler_sexo(sexo);
        
        printf("=== Entre com a nota:\n");
        
        scanf("%f",&nota);
        nota = ler_nota(nota);

    
        printf("\nDados Confirmados: Idade %d, Sexo %c, Nota %.2f",idade,sexo,nota);
    
    }

    system("pause");
}
