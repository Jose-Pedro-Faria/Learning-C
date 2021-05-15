#include <stdio.h>

void teste (int n);

int main ()
{
    int num;
    printf("Quantas vezes quer repetir a mensagem? ");
    scanf("%i", &num);
    teste (num);
}

void teste (int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("SnailChip\n");
    }
    
}