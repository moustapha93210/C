#include <stdio.h>

int main(){

    int T[100];
    int N, Tmp;
    int *P1, *P2;


    // Saisie, contrôle et lecture de la taille du tableau A choisis par l'utilisateur
    recN:
    printf("Veuillez saisir la taille du tableau : \n");
    if(scanf("%d", &N) != 1 || N <= 1){

        printf("Erreur ! Veuillez choisir un nombre.\n");
        while(getchar() != '\n');// Vide le buffer d'entrée
        goto recN;// Recommence la boucle si la  saisie est invalide
    }

    // Saisie, contrôle et lecture du remplissage de A
    recT:
    printf("Veuillez saisir les elements du tableau : \n");

    for(P1 = T; P1 < T + N; P1++){

        printf("T[%d] = ", P1 - T);
        if(scanf("%d", P1) != 1 ){

            printf("Erreur ! Veuillez choisir un nombre.\n");
            while(getchar() != '\n');// Vide le buffer d'entrée
            goto recT;// Recommence la boucle si la  saisie est invalide
        }
    }



    // Trie du tableau dans l'ordre croissant
    for(P1 = T; P1 < T + N; P1++){

        for(P2 = P1 + 1; P2 < T + N; P2++)

            if(*P1 > *P2){

                Tmp = *P1;
                *P1 = *P2;
                *P2 = Tmp;

            }


    }



    // Affichage du tableau dans l'ordre croissant
    printf("Les elements du tableau trier dans l'ordre croissant sont : \n");

    for(P1 = T; P1 < T + N; P1++){

        printf("T[%d] = %d\n", P1 - T, *P1);

    }






    return 0;
}
