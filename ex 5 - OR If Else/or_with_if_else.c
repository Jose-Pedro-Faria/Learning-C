#include <stdio.h>

int main (){
    char a;
    printf("Tens mais de 18 anos? (Y=sim, N=nao) ");
    scanf("%c", &a);
    if (a == 'y' || a == 'Y')
    {
        printf("OK, tens acesso\n");
    }
    else if (a =='n' || a == 'N')
    {
        printf("Desculpa, nao tens acesos\n");
    }
    else
    {
        printf("Tens de responder corretamente\n");
    } 
}