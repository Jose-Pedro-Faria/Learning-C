#include <stdio.h>

int num (void);

int main ()
{
    int resultado = num();
    printf("O numero inserido foi: %i", resultado);
}

int num (void)
{
    int n;
    do
    {
        printf("Escreve um numero inteiro positivo: ");
        scanf("%i", &n);
    }
    while (n < 1);
    return n;
    
}