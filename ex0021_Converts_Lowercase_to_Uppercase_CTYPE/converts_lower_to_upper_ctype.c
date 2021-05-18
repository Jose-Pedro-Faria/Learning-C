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
        //podemos usar 'a' e 'z' porque ele vai buscar os códigos da tabela ASCI
        
        if (islower(word[i]))
        {
            printf("%c", toupper(word[i]));
        }
        else
        {
            printf("%c", word[i]);
        }
    }
    printf("\n");
}