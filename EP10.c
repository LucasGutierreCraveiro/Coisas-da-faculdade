#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    //Variaveis
    int aleatorios[11];
    int random;
    int dec;

    //Variáveis de Loop
    int i,j,k;
    //

    //Reset de Seed
    srand(time(NULL));
    //

    printf("Vetor aleatorio gerado = [ ");

    //Gera números aleatórios
    for (i=0; i<11; i++)
    {
        //Armazena números aleatórios entre 10 e 20;
        //10 (valor mínimo) + rand() (gera o número aleatório entre 0 e máximo permitido) % 11 (divide e recebe a sobra)
        aleatorios[i] = 10 + rand() % 11;
        //

        //Print dos números aleatórios
        printf("%d ",aleatorios[i]);
        //
    }

    printf("]\n");

    //Ordena os números gerados e armazenados em aleatorios[] em ordem decrescente
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
