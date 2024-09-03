#include <stdio.h>

int main()
{
    int nb;

    printf("Veuillez entrez un nombre : ");
    scanf("%d", &nb);

    if(nb > 0)
        printf("Le nombre saisit est positif");
    else if(nb == 0)
        printf("Le nombre saisit est nul");
    else
        printf("Le nombre saisit est negatif");

    /*
    float nb;

    printf("Veuillez entrez un nombre : ");
    scanf("%f", &nb);

    if(nb > 0)
        printf("Le nombre saisit est positif");
    else if(nb < 0)
        printf("Le nombre saisit est negatif");
    else
        printf("votre nombre est egale a zero");
    */

    return 0;
}
//
// Created by chaib on 16/04/2024.
//
