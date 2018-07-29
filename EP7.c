#include <stdio.h>

int main(){
    int matricula[7];
    float calculo = 0;
    float nota[7];
    float media;
    int i;
    int j;


    for (i = 1; i <= 7; i++){
        //
        printf("Entre com o nro. de matricula do aluno %d: ",i);
        scanf("%d", &matricula[i]);
        printf("Entre com a nota final do aluno %d: ",i);
        scanf("%f", &nota[i]);
        printf("\n");
        calculo += nota[i];
        }
        //
        media = (calculo / 7);
        //
        printf("\n\nMedia da Turma:\t%.2f\n\n",media);
        //
        printf("Matricula \tNota\n");
    for (j = 1; j <= 7; j++){
        if (nota[j] < media){
                    printf("%d \t\t%.2f (abaixo da media)\n",matricula[j],nota[j]);
          } else {
                    printf("%d \t\t%.2f\n",matricula[j],nota[j]);
        }

        }


    system("pause");

}
