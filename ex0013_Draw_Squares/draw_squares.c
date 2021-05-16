#include <stdio.h>

int main (void)
{
    int alt, larg;
    printf("Vamos desenhar Quadrados/Retangulos\n");
    printf("Qual a altura (apenas numeros inteiros)? ");
    scanf("%i", &alt);
    printf("E a largura (apenas numeros inteiros)?");
    scanf("%i", &larg);

    for (int i = 0; i < alt; i++)
    {
        for (int j = 0; j < larg; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}