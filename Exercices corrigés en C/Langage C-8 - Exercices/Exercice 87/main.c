#include <stdio.h>

int main(){

    int T[100];
    int N, Tmp;
    int *P1, *P2;


    // Saisie et lecture de la taille du tableau choisis par l'utilisateur
    printf("Veuillez choisir la taille du tableau : \n");
    scanf("%d", &N);



    // Saisie et lecture du remplissage du tableau
    printf("Veuillez saisir les elements du tableau : \n");

    for(P1 = T; P1 < T + N; P1++){

        printf("T[%d] = ", P1 - T + 1);
        scanf("%d", P1);
    }



    // Rangement des éléments dans l'ordre inverse
    for(P1 = T, P2 = T + (N - 1); P1 < P2; P1++, P2--){

        Tmp = *P1;
        *P1 = *P2;
        *P2 = Tmp;

    }


    // Affichage du tableau inverse
    printf("Les elements du tableau dans l'ordre inverse sont : \n");

    for(P1 = T; P1 < T + N; P1++)
        printf("%d\n", *P1);








    return 0;
}
