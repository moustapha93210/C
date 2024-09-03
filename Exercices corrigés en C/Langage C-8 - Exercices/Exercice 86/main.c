#include <stdio.h>

int main(){

    int T[100];
    int N, X;
    int *P1, *P2;

    P1 = T;

    // Saisie et lecture de la taille du tableau choisis par l'utilisateur
    printf("Veuillez saisir la taille du tableau : \n");
    scanf("%d", &N);


    // Saisie et lecture des éléments du tableau
    printf("Veullez saisir les elements du tableau : \n");

    for(P1 = T; P1 < T + N; P1++){

        printf("T[%d] = ", P1 - T);
        scanf("%d", P1);
    }


    // Saisie et lecture de la valeur choisis par l'utilisateur pour être supprimé du tableau
    printf("Veuillez saisir l'element X a eliminer du tableau : \n");
    scanf("%d", &X);

    P2 = T;

    for(P1 = T; P1 < T + N; P1++){

        *P2 = *P1;

        if(*P2 != X)
            P2++;

    }

    N = P2 - T;

    printf("Les elements apres l'elimination de %d sont : \n", X);

    for(P1 = T; P1 < T + N; P1++)
        printf("%d ", *P1);



    return 0;
}
