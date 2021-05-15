#include <stdio.h>

int main ()
{
    int counter = 1;
    int a;

    printf("-- Contador --\n");
    printf("Queres contar ate quanto? ");
    scanf("%i", &a);

    while (counter < (a+1))
    {
        printf("%i\n",counter);
        counter++;
    }
}