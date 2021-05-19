#include <stdio.h>

int main ()
{
    int num [] = {4, 6, 8, 2, 7, 5, 0};
    int num1;
    printf("Insira um numero e confirme se ele esta na base de dados: ");
    scanf("%i", &num1);

    //Vai percorrer o array todo até encontrar o numero 0
    for (int i = 0; i < 7; i++)
    {
        if (num[i] == num1)
        {
            printf("Encontrei\n");
            return 0;
        }
    }
    printf("Nao Encontrei\n");
    return 1;
    
}