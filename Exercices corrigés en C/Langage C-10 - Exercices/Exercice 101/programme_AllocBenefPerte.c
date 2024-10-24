#include <stdio.h>
#include <stdlib.h>

int main() {

    float *pv = malloc(1 * sizeof(float) );
    float *pr = malloc(1 * sizeof(float) );
    float *benefice = malloc(1 * sizeof(float) );
    float *perte = malloc(1 * sizeof(float) );


    recpr:
    printf("\nVeuillez saisir le prix de revient : ");
    if(scanf("%f", pr) != 1){

        printf("Erreur ! Veuillez choisir un nombre.\n");
        while(getchar() != '\n');// Vide le buffer d'entrée
        goto recpr;// Recommence la boucle si la  saisie est invalide
    }


    recpv:
    printf("\nVeuillez saisir le prix de vente : ");
    if(scanf("%f", pv) != 1){

        printf("Erreur ! Veuillez choisir un nombre.\n");
        while(getchar() != '\n');// Vide le buffer d'entrée
        goto recpv;// Recommence la boucle si la  saisie est invalide
    }

    *benefice = *pv - *pr;

    *perte = *pr - *pv;

    if(*benefice > 0)
        printf("Benefice = %.2f", *benefice);
    else if(*benefice < 0)
        printf("Perte = %.2f", *perte);
    else
        printf("Ni profit, ni perte.");

    free(pv);
    free(pr);
    free(benefice);
    free(perte);




    return 0;
}
