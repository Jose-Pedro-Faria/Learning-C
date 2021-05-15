#include <stdio.h>

int main ()
{
    int x, y;
    int exit = 1;

    while (exit==1)
    {
        printf("Da um valor a x: ");
        scanf("%i", &x);
        printf("Da um valor a y: ");
        scanf("%i", &y);
        printf("x + y = %i\n", x+y);
        printf("Para realizar outra operação clica ""1"", qualquer outra resposta fecha o programa: ");
        scanf("%i", &exit);
    }  
}