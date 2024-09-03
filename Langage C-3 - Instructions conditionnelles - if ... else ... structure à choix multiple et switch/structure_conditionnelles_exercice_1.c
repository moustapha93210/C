#include <stdio.h>

int main()
{
    float nb1, nb2;
    float max;

    printf("Veuillez saisir un nombre : ");
    scanf("%f", &nb1);

    printf("Veuillez saisir un autre nombre : ");
    scanf("%f", &nb2);

    if(nb1 > nb2)
        max = nb1;

    if(nb1 < nb2)
        max = nb2;

    printf("Le max est : %.2f", max);

    /*
    printf("Veuillez saisir un nombre : ");
    scanf("%f", &nb1);

    printf("Veuillez saisir un autre nombre : ");
    scanf("%f", &nb2);

    if(nb1 > nb2)
    {
        printf("Le nombre le plus grand est : %.2f", nb1);
    }
    else if(nb1 < nb2)
    {
        printf("Le nombre le plus grand est : %.2f", nb2);
    }
    else
    {
        printf("Les deux nombre sont egaux");
    }
    */

    return 0;
}
//
// Created by chaib on 16/04/2024.
//
