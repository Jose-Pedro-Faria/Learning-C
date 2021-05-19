#include <stdio.h>

int main ()
{
    int num [] = {4, 6, 8, 2, 7, 5, 0};

    //Vai percorrer o array todo até encontrar o numero 0
    for (int i = 0; i < 7; i++)
    {
        if (num[i] == 0)
        {
            printf("Encontrei\n");
            return 0;
        }
    }
    printf("Nao Encontrei\n");
    return 1;
    
}