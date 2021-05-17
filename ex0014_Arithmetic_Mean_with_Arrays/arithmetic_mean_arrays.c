#include <stdio.h>

int main ()
{
    int num;
    

    printf("--- Calculo da Media Aritmetrica ---\n");
    printf("Quantos valores deseja introduzir?");
    scanf("%i", &num);

    int valores_media [num];

    for (int i = 0; i < num; i++)
    {
        printf("Insira o numero %i: ", i+1);
        scanf("%i", &valores_media[i]);
    }
    
    for (int j = 0; j < num; j++)
    {
        printf("Valor %i: %i\n", j+1, valores_media[j]);
    }
    int media = 0;

    for (int y = 0; y < num; y++)
    {
        media = media + valores_media[y];
    }
    printf("%0.2f\n", media/(float)num);
    
}