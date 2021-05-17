#include <stdio.h>

int main ()
{
    char v[]= "ola";

    //Separa os carateres
    printf("%c - %c - %c\n", v[0], v[1], v[2]);

    //Mostra o código da tabela ASCCI equivalente a cada carater
    printf("%i - %i - %i\n", v[0], v[1], v[2]);

}