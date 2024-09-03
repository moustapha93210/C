#include <stdio.h>

int main()
{
    float T;

    printf("Veuillez entrez la temperature de l'eau : ");
    scanf("%f", &T);

    if(T < 0)
        printf("L'etat de l'eau est GLACE");
    else if(T > 100)
        printf("L'etat de l'eau est LIQUIDE");
    else
        printf("L'etat de l'eau est VAPEUR");

    /*
    float temperatureEau;

    printf("Veuillez entrez la temperature de l'eau : ");
    scanf("%f", &temperatureEau);

    if(temperatureEau < 0)
        printf("GLACE");
    else if(temperatureEau > 0 && temperatureEau < 100)
        printf("LIQUIDE");
    else
        printf("VAPEUR");
    */

    return 0;
}
//
// Created by chaib on 16/04/2024.
//
