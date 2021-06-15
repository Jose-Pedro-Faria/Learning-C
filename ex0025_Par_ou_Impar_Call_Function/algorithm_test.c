#include <stdio.h>
#include <string.h>

int cont = 0,
    sens1 = 1;

int par_impar_test();

int main()
{
    while (sens1 < 10)
    {

        int par_ou_impar = par_impar_test();

        switch (par_ou_impar)
        {
        case 0:
            printf("O numero e PAR\n");
            printf("STOP");
            delay(2000);
            printf("Recua");
            delay(2000);
            printf("Roda Direita");
            delay(4000);
            printf("Avança");
            delay(3000);
            printf("Volta a Rodar Direita");
            delay(4000);
            printf("Continua Limpeza em frente");

            break;

        case 1:
            printf("O numero e IMPAR\n");
            printf("STOP");
            delay(2000);
            printf("Recua");
            delay(2000);
            printf("Roda Esquerda");
            delay(4000);
            printf("Avança");
            delay(3000);
            printf("Volta a Rodar Esquerda");
            delay(4000);
            printf("Continua Limpeza em frente");
            break;

        default:
            break;
        }
        sens1 = sens1 +1;

    }

}

int par_impar_test()
{
    if(sens1 % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}