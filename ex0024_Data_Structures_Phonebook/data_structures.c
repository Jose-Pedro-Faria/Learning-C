#include <stdio.h>
#include <string.h>

struct pessoa
{
    char nome [50];
    char num [10];
};

int main ()
{

    int registos;
    printf("Quantos registos vai fazer? ");
    scanf("%i", &registos);

    struct pessoa dados[registos];

    for (int i = 0; i < registos; i++)
    {
        printf("%iº Pessoa\n", i+1);
        printf("Insira o nome: ");
        scanf("%s", dados[i].nome);
        printf("e o numero de telemovel (9 digitos): ");
        scanf("%s", dados[i].num);
        printf("\n");
        printf("Resumo dos Dados Inseridos: \n");
        printf("Nome: %s \nNumero: %s\n\n", dados[i].nome, dados[i].num);
        printf("----------------------------------");
        printf("\n\n");
    }
    
    while (1)
    {
        char nome_pesquisa [50];
        printf("Verifique o numero de alguém\n");
        printf("Insira o nome da pessoa: ");
        scanf("%s", nome_pesquisa);

        for (int i = 0; i < registos; i++)
        {
            if (strcmp(dados[i].nome, nome_pesquisa) == 0)
            {
                printf("O numero é: %s\n", dados[i].num);
                
            }
        }
        printf("O registo nao existe\n\n");
        printf("----------------------------------\n\n");
    
    }
    
        
}
