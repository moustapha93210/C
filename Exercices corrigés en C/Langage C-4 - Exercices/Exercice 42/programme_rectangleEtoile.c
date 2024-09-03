#include <stdio.h>

int main(){

    int L, C, i, j;

    recLrec:
    printf("Veuillez entrer le nombre de lignes de votre rectangle d'etoile : \n");
    if( scanf("%d",&L) != 1 ){
        printf("Erreur ! Veuillez entrer un nombres.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recLrec;// Recommence la boucle si l'entrée est invalide
    }

    recCrec:
    printf("Veuillez entrer le nombre de colones de votre rectangle d'etoile : \n");
    if( scanf("%d", &C) != 1 ){
        printf("Erreur ! Veuillez entrer un nombre.\n");
        while(getchar() != '\n');
        goto recCrec;
    }

    printf("Voici votre rectangle d'etoile : \n");

    for(i = 1; i <= L; i++){

        printf("\n* ");

        for(j = 1; j <= C - 1; j++){

            printf("* ");

        }

    }


    return 0;
}
