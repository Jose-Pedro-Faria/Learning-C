#include <stdio.h>

float triangulo ();
float retangulo ();
float circulo ();

int main ()
{
    int sair = 1;

    while (sair == 1)
    {
        char menu;
        printf("--- Calculadora de Areas ---\n");
        printf("Selecione o numero da forma que pretende:\n");
        printf("1- Triangulo\n");
        printf("2- Retangulo\n");
        printf("3- Circulo\n");
        printf("0- Fechar Programa\n");
        printf("Resposta: ");
        scanf("%s", &menu);

        if (menu == '1')
        {
            float triangulo ();
            float areatriangulo = triangulo ();
            printf("A area é: %0.3fcm2\n\n", areatriangulo);
            sair = 1;
        }
        else if (menu == '2')
        {
            float retangulo ();
            float arearetangulo = retangulo();
            printf("A areia é: %0.3fcm2\n\n", arearetangulo);
            sair = 1;
        }
        else if (menu == '3')
        {
            float circulo ();
            float areacirculo = circulo();
            printf("A area do circulo é: %0.3fcm2\n\n", areacirculo);
            sair = 1;
        }
        else if (menu == '0')
        {
            printf("O Programa vai fechar...\n");
            sair = 0;
        }
        else 
        {
            printf("O valor não é valido\n\n");
            sair = 1;
        }
    } 
    printf("saiu do while");
}
    
float triangulo ()
{
    float alt;
    float base;
    printf("Qual a altura do triangulo em centimetros? ");
    scanf("%f", &alt);
    printf("e a base (cm)? ");
    scanf("%f", &base);

    float areatrig = (base * alt) / 2;
    return areatrig;
    
}

float retangulo ()
{
    float larg;
    float comp;
    printf("Qual o comprimento do retangulo em centimetros? ");
    scanf("%f", &comp);
    printf("e a largura (cm)? ");
    scanf("%f", &larg);

    float arearet = (larg * comp);
    return arearet;
}

float circulo ()
{
    float raio;
    float pi = 3.14159;
    printf("Qual o raio do retângulo em ccentimetros? ");
    scanf("%f", &raio);

    float areacirc = (pi * raio)*(pi * raio);
    return areacirc;
}