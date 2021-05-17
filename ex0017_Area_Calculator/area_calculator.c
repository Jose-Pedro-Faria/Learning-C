#include <stdio.h>

int triangulo ();
int retangulo ();
int circulo ();

int main ()
{
    int menu;
    printf("-- Calculadora de Areas ---\n");
    printf("Selecione o numero da forma que pretende:\n");
    printf("1- Triangulo\n");
    printf("2- Retangulo\n");
    printf("3- Circulo\n");
    scanf("%i", &menu);

    if (menu == 1)
    {
        int triangulo ();
    }
    else if (menu == 2)
    {
        int retangulo ();
    }
    else if (menu == 3)
    {
        int circulo ();
    }
    else 
    {
        printf("O valor não é valido");
    }
    
    
}

int triangulo ()
{
    printf("Sou a Funcao de Triangulo");
}

int retangulo ()
{
    printf("Sou a Funcao de Retangulo");
}

int circulo ()
{
    printf("Sou a Funcao de Circulo");
}