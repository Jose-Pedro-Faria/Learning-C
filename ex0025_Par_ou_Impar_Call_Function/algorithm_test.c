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
            break;

        case 1:
            printf("O numero e IMPAR\n");
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