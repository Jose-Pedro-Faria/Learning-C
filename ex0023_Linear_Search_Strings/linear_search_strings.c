#include <stdio.h>
#include <string.h>

int main ()
{
    char nomes [][20] = {"Ana", "Carla", "Diana", "Francisca", "Helena", "Joana", "Maria"};
    char nome [20] = "";
    printf("Verifique se um nome esta na base de dados: ");
    scanf("%s", nome);

    //este algoritmo não compara as string alfabeticamente, mas "ASCIIbeticamente"
    //verifica os valores ASCII e, em seguida, compara-os
    //i < 7 porque são 7 nomes
    for (int i = 0; i < 7; i++)
    {
        //função que compara duas strings
        //se a função retornar 0 é porque as strings são iguais
        //se a função retornar um valor negativo ou positivo é porque as strings não são iguais
        //por isso no "if" comparamos o valor da comparação das strings com 0 para sabermos se são iguais
        if (strcmp(nomes[i], nome) == 0)
        {
            printf("Encontrei\n");
            return 0;
        }
    }
    printf("Não encontrei\n");
    return 1;
}