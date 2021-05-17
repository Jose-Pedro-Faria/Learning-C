#include <stdio.h>

int main ()
{
    int num;
    printf("--- Antecessor e Sucessor de um Numero ---\n");
    printf("Escolhe um numero: ");
    scanf("%i", &num);

    int num_plus = num + 1;
    int num_less = num - 1;

    printf("Numero: %i\n", num);
    printf("Antecessor: %i\n", num_less);
    printf("Sucessor: %i\n", num_plus);

}