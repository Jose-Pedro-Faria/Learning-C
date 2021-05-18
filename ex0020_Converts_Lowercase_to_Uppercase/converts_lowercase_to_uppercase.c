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
        
        if ( word[i] >= 'a' && word[i] <= 'z')
        {
            // -32 porque, na tabela ASCI, o codigo das letras maiusculas é o código das minusculas correspondentes menos 32 
            printf("%c", word[i]-32);
        }
        else
        {
            printf("%c", word[i]);
        }
    }
    printf("\n");
}