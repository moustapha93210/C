#include <stdio.h>

int main(){

    int Taille;
    int T[10];
    int *P;

    P = T;

    // Saisie, contrôle et lecture de la Taille choisis par l'utilisateur
    recTaille:
    printf("Veuillez choisir la Taille de votre tableau : \n");
    if( scanf("%d", &Taille) != 1 || Taille <= 0){

        printf("Erreur ! Veuillez choisir un nombre.\n");
        while(getchar() != '\n');// Vide le buffer d'entrée
        goto recTaille;// Recommence la boucle si la  saisie est invalide
    }

    // Saisie, contrôle et lecture du tableau T
    printf("Veuillez saisir les elements du tableau : \n");

    recT:
    // Ici pour la taille du tableau on dit que P qui pointe vers l'adresse de T[0] (&T[0]) doit être strictement inférieur à T qui est un pointeur qui pointe vers T[0] + Taille (ex : Taille = 6) Donc T[0+6] = T[6]
    for(P = T; P < T + Taille ; P++){

        // Ici on fait P = 0 pointe vers l'adresse de T[0], T = T[0], 0 - 0 = 0, ensuite P++ =  P = P + 1 = P = 0 + 1, P pointe vers l'adresse de T[0+1] (&T[0+1]), T = T[0], 1 - 0 = 1 et ainsi de suite
        printf("T[%d] = ", P - T);
        if( scanf("%d", P) != 1 ){

            printf("Erreur ! Veuillez choisir un nombre.\n");
            while(getchar() != '\n');// Vide le buffer d'entrée
            goto recT;// Recommence la boucle si la  saisie est invalide
        }

    }


    // Affichage des éléments du tableau T
    printf("Les elements du tableau sont : \n");

    for(P = T; P < T + Taille; P++){

        printf("T[%d] = %d\n", P - T, *P);

    }






    return 0;
}
