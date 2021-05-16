#include <stdio.h>

int main ()
{
    int counter;
    int a = -1;

    printf("--- Contador Regressivo ---\n");
    printf("Em que numero pretende começar? ");
    scanf("%i", &counter);

    while (a < counter)
    {
        printf("%i\n", counter);
        counter--;
    }
    
}