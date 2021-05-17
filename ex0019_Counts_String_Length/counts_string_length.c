#include <stdio.h>
#include <string.h>

int main ()
{
    char name[]="";
    printf("--- Contador de carateres ---\n");
    printf("Adicione o que deseja contar: ");
    scanf("%s", name);

    //Repete o ciclo até atingir o valor "\0" que significa fim de string
    //strlen() mede o tamanho da string
    //as parametros do ciclo for são equivalentes a: for (int i = 0; name[i] != '\0'; i++)
    //repete o ciclo até atingir o valor "\0" que significa fim de string
    // a diferença está no design do código, assim é mais clean e escalavél
    int len = strlen(name);
    for (int i = 0; i < len; i++)
    {
        printf("Posicao %i: %c\n", i, name[i]);
    }
    printf("\n");
    printf("%i", len);

}