#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    printf(" \t Exercice 4 - Calculer l'aire d'un cercle \n");

    float rayon, surface;
    const float pi = 3.14;

    printf(" Veuillez saisir le rayon : " );
    scanf(" %f", &rayon);

    surface = (pi * (rayon * rayon));

    //ou

    /*
    surface = (pi * pow(rayon, 2));
    */

    printf(" L'aire de voitre cercle est de : %.2f", surface);

    return 0;
}