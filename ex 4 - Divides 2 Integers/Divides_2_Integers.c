#include <stdio.h>

int main ()
{
    int num1, num2;
    float resultado;
    printf("-- Divisao de 2 numeros inteiros --\n");
    printf("Insere o numerador: ");
    scanf("%i", &num1);
    printf("Insere o denominador: ");
    scanf("%i", &num2);
    resultado = (float) num1 / (float) num2;
    printf("Resultado de: %i / %i = %f", num1, num2, resultado);
}