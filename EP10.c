#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    //Variaveis
    int aleatorios[11];
    int random;
    int dec;

    //Vari�veis de Loop
    int i,j,k;
    //

    //Reset de Seed
    srand(time(NULL));
    //

    printf("Vetor aleatorio gerado = [ ");

    //Gera n�meros aleat�rios
    for (i=0; i<11; i++)
    {
        //Armazena n�meros aleat�rios entre 10 e 20;
        //10 (valor m�nimo) + rand() (gera o n�mero aleat�rio entre 0 e m�ximo permitido) % 11 (divide e recebe a sobra)
        aleatorios[i] = 10 + rand() % 11;
        //

        //Print dos n�meros aleat�rios
        printf("%d ",aleatorios[i]);
        //
    }

    printf("]\n");

    //Ordena os n�meros gerados e armazenados em aleatorios[] em ordem decrescente
    for (j=0; j<11; j++)
    {
        if(aleatorios[j] < aleatorios[j+1])
        {
            dec = aleatorios[j+1];
            aleatorios[j+1] = aleatorios[j];
            aleatorios[j] = dec;
            j = -1;
        }
    }

    printf("Ordenacao decrescente  = [ ");

    for(k = 0; k < 11; k++)
    {
        printf("%d ", aleatorios[k]);
    }

    printf("]\n");

    system("pause>>log");

}
