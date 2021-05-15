#include <stdio.h>

int main ()
{
    int counter;
    printf("-- Contador Decrementador com FOR ---\n");
    printf("Em que numero pretende começar? ");
    scanf("%i", &counter);

    for (int i = -1; i < counter; counter--)
    {
        printf("%i\n", counter);
    }
    
}