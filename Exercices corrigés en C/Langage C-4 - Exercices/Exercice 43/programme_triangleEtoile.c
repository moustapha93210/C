#include <stdio.h>

int main(){

    int L, etoile, i, j;

    recTriL:
    printf("Veuillez entrer le nombre de lignes de votre triangle d'etoile : \n");
    if( scanf("%d", &L) != 1 ){
        printf("Erreur ! Veuillez entrer un nombre.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recTriL;// Recommence la boucle si l'entrée est invalide
    }

    printf("Voici votre triangle d'etoile : \n");

    for(i = 1; i <= L; i++){

        printf("\n* ");

        for(j = 1; j <= i - 1; j++){

            printf("* ");

        }
    }



    return 0;
}
