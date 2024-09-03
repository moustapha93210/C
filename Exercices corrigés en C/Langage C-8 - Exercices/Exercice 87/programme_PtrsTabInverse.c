#include <stdio.h>

int main(){

    int T[100];
    int Tmp, N;
    int *P1, *P2;


    // Saisie, contrôle et lecture de la taille du tableau choisis par l'utilisateur
    recTaille:
    printf("Veuillez choisir la taille du tableau : \n");
    if(scanf("%d", &N) != 1 || N <= 1 ){

        printf("Erreur ! Veuillez choisir un nombre superieur a 1.\n");
        while(getchar() != '\n');// Vide le buffer d'entrée
        goto recTaille;// Recommence la boucle si la  saisie est invalide
    }

    //P1 = T;

    // Saisie, contrôle et lecture du remplissage du tableau
    printf("Veuillez saisir les elements du tableau : \n");

    for(P1 = T; P1 < T + N; P1++){

        recT:
        printf("T[%d] = ", P1 - T);
        if(scanf("%d", P1) != 1 ){

            printf("Erreur ! Veuillez choisir un nombre.\n");
            while(getchar() != '\n');// Vide le buffer d'entrée
            goto recT;// Recommence la boucle si la  saisie est invalide
        }
    }



    // Rangement des éléments dans l'ordre inverse
    P1 = T;
    P2 = T + (N - 1);

    while(P1 < P2){

        Tmp = *P1;
        *P1 = *P2;
        *P2 = Tmp;

        P1++;
        P2--;
    }


    // Affichage du tableau inverse
    printf("Les elements ranges dans l'ordre inverse : \n");

    for(P1 = T; P1 < T + N; P1++)
        printf("T[%d] = %d\n", P1 - T, *P1);








    return 0;
}
