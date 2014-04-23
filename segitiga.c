/*Menghitung Sisi Miring segitiga siku-siku*/
#include <stdio.h>
#include <math.h>

main()
{
    float alas,tinggi,sisi_miring;
    printf("Program menghitung sisi miring segitiga siku-siku\n");
    printf("Masukkan tinggi alas = ");
    scanf("%f",&alas);
    printf("Masukkan tinggi segitiga = ");
    scanf("%f",&tinggi);
    sisi_miring = sqrt(pow(alas,2)+pow(tinggi,2));
    printf("Sisi miring segitiga siku-siku = %10.2f\n",sisi_miring);
    return 0;
}

