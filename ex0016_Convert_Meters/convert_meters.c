#include <stdio.h>

int main ()
{
    float meter;

    printf("--- Conversor de Distancias ---\n");
    printf("Qual a distancia em metros? ");
    scanf("%f", &meter);

    float km = meter * 0.001;
    float hm = meter * 0.01;
    float dam = meter * 0.1;

    float dm = meter * 10;
    float cm = meter * 100;
    float mm = meter * 1000;

    printf("Km  -> %0.5f\n", km);
    printf("Hm  -> %0.5f\n", hm);
    printf("Dam -> %0.5f\n", dam);
    printf("m   -> %0.5f\n", meter);
    printf("dm  -> %0.5f\n", dm);
    printf("cm  -> %0.5f\n", cm);
    printf("mm  -> %0.5f\n", mm);
}