#include <stdio.h>

int main ()
{
    int counter;

    printf("--- Contador com Ciclo FOR ---\n");
    printf("Ate que numero pretende contar? ");
    scanf("%i", &counter);

    for (int i = 1; i < (counter + 1); i++)
    {
        printf("%i\n", i);
    }
    
}