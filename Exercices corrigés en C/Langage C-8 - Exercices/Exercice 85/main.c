#include <stdio.h>

int main(){

    int T[100];
    int N;
    int *P;

    P = T;

    // Saisie et lecture de la N choisis par l'utilisateur
    printf("Veuillez choisir la N de votre tableau : \n");
    scanf("%d", &N);


    // Saisie, contrôle et lecture du tableau T
    printf("Veuillez saisir les elements du tableau : \n");

    // Ici pour la taille du tableau on dit que P qui pointe vers l'adresse de T[0] (&T[0]) doit être strictement inférieur à T qui est un pointeur qui pointe vers T[0] + N (ex : N = 6) Donc T[0+6] = T[6]
    for(P = T; P < T + N ; P++){

        printf("T[%d] = ", P - T+1);
        scanf("%d", P);

    }


    // Affichage des éléments du tableau T
    printf("Les elements du tableau sont : \n");

    for(P = T; P < T + N; P++){

        printf("%d ", *P);

    }






    return 0;
}
