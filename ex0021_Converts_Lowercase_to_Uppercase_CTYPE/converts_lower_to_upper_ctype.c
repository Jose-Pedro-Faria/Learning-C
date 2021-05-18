#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main ()
{
    char word[10] = "";
    printf("Digite uma palavra: ");
    scanf("%s", word);

    int n = strlen(word);
    for (int i = 0; i < n; i++)
    {
        printf("%c", toupper(word[i]));
    }
    printf("\n");
}