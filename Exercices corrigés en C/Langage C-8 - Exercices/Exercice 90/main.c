#include <stdio.h>

int main(){

    int T[100];
    int N, Tmp;
    int *P1, *P2;


    // Saisie et lecture de la taille du tableau T choisis par l'utilisateur
    printf("Veuillez saisir la taille du tableau T: \n");
    scanf("%d", &N);

    // Saisie et lecture du remplissage de T

    printf("Veuillez saisir les elements du tableau T : \n");

    for(P1 = T; P1 < T + N; P1++){

        printf("T[%d] = ", P1 - T + 1);
        scanf("%d", P1);

    }



    // Trie du tableau dans l'ordre décroissant
    for(P1 = T; P1 < T + N; P1++){

        for(P2 = P1 + 1; P2 < T + N; P2++)

            if(*P1 < *P2){

                Tmp = *P1;
                *P1 = *P2;
                *P2 = Tmp;

            }
    }



    // Affichage du tableau dans l'ordre décroissant
    printf("Les elements du tableau par ordre décroissant sont : \n");

    for(P1 = T; P1 < T + N; P1++){

        printf("%d ", *P1);

    }






    return 0;
}