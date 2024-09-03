#include <stdio.h>

int main(){

    int Taille, X;
    int T[100];

    int *P1;
    int *P2;

    P1 = T;


    // Saisie, contrôle et lecture de la taille du tableau choisis par l'utilisateur
    recTaille:
    printf("Veuillez choisir la taille de votre tableau : \n");
    if(scanf("%d", &Taille) != 1 || Taille <= 0){

        printf("Erreur ! Veuillez choisir un nombre.\n");
        while(getchar() != '\n');// Vide le buffer d'entrée
        goto recTaille;// Recommence la boucle si la  saisie est invalide
    }


    // Saisie, contrôle et lecture des éléments du tableau
    printf("Veuillez saisir les elements du tableau : \n");

    for(P1 = T; P1 < T + Taille; P1++){

        recT:
        printf("T[%d] = ", P1 - T);
        if(scanf("%d", P1) != 1){

            printf("Erreur ! Veuillez choisir un nombre.\n");
            while(getchar() != '\n');// Vide le buffer d'entrée
            goto recT;// Recommence la boucle si la  saisie est invalide
        }
    }


    // Saisie, contrôle et lecture de la valeur choisis par l'utilisateur pour être supprimé du tableau
    recX:
    printf("Veuillez choisir la valeur que vous souhaitez supprime : \n");
    if(scanf("%d", &X) != 1){

        printf("Erreur ! Veuillez choisir un nombre.\n");
        while(getchar() != '\n');// Vide le buffer d'entrée
        goto recX;// Recommence la boucle si la  saisie est invalide
    }

    P2 = T;

    for(P1 = T; P1 < T + Taille; P1++){

        printf("P1 = &T[%d] = %d\n", P1 - T, *P1);
        printf("P2 = &T[%d] = %d\n", P2 - T, *P2);
        printf("X = %d\n", X);

        *P2 = *P1;
        printf("*P2 = %d\n", *P1);


        if(*P2 != X){

            printf("%d != %d\n", *P2, X);

            P2++;
            printf("P2++ = P2 = &T[%d]\n\n", P2 - T);
        }
        else
            printf("\n");

    }


    printf("Apres la supression de ou des elements qui contiennent %d, voici le tableau : \n", X);
    Taille = P2 - T;

    for(P1 = T; P1 < T + Taille; P1++)
        printf("T[%d] = %d\n", P1 - T, *P1);









    return 0;
}
