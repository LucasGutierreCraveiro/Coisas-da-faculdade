#include <stdio.h>
#include <stdlib.h>

int main() {
    float notas[5][3];
    float aux1, aux2;
    int   l, k;

//======================================================================//
    for (l = 0; l < 5; l++) {
        printf("Entre com as 3 Notas para o aluno %d : ", l+1);
        for (k = 0; k < 3; k++) {
            scanf("%f", &notas[l][k]);
        }
    }

//======================================================================//  
    printf("\n\n");
    printf("\t\tP1\t\tP2\t\tP3\t\t(P1+P2+P3)/3\n");
    for (l=0;l<5;l++){
        aux1 = 0;
        printf("Aluno %d:",l+1);
        for (k=0;k<3;k++){
            printf("\t%.1f\t",notas[l][k]);
            aux1 = aux1 + notas[l][k];
            
        }
        aux1 = aux1 / 3;
        printf("\t%.2f",aux1);
        printf("\n");
    }

//======================================================================//     
    printf("\n");
    printf("\t\tP1\t\tP2\t\tP3\n");
    printf("Media Provas: ");
    for (k=0;k<3;k++){
        aux2 = 0;
        for(l=0;l<5;l++){
        aux2 = aux2 + notas[l][k];
        }
        aux2 = aux2 /5;
        printf("\t%.2f\t",aux2);
    }
//======================================================================//     
    printf("\n");
    printf("\n");
    system("pause>>log");
    
//======================================================================// 
}
