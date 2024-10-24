#include <stdio.h>
#include <stdlib.h>


int main(){

    int n, i, a;
    float M, S;
    char reponse;



    // Saisie et lecture de la taille du tableau
    recn:
    printf("Entrer la taille du tableau : ");
    scanf("%d", &n);

    // Allocation dynamique du tableau
    float *T = calloc(n, sizeof(float));



    // Saisie, lecture et calcul de la moyenne des éléments du tableau
    printf("Saisir les elements du tableau : \n");

    S = 0;

    for(i = 0; i < n; i++){

        printf("Element %d = ", i+1);
        scanf("%f", T+i);

        S = S + *(T+i);

    }

    M = S / n;


    // Affichage de la moyenne
    printf("La moyenne des elements est : %.2f\n\n", M);


    // Demande d'ajout, saisie et lecture des autres éléments
    printf("Veux-tu ajouter d'autres elements (O/N) ? : \n");
    scanf(" %c", &reponse);


    // Faire ce programme tant que la réponse est 'o' ou 'O'
    while(reponse != 'N'){

        // Saisie et lecture du nombre d'éléments à ajouter
        printf("Entrer le nombre d'elements a ajouter : ");
        scanf("%d", &a);

        // Affectation de la nouvelle taille du tableau
        n = n + a;


        // Allocation dynamique de la nouvelle taille du tableau
        T = realloc(T, n * sizeof(float) );


        // Affichage des éléments du tableau avant l'ajout des nouveaux éléments
        for(i = 0; i < (n - a); i++)
            printf("Element %d = %.2f\n", i+1, *(T+i) );



        // Saisie, lecture et calcule de la moyenne des nouveaux éléments du tableau
        printf("Saisir les nouveaux elements du tableau : \n");

        for(i = (n - a); i < n; i++){

            printf("Element %d = ", i);
            scanf("%f", T+i);

            S = S + *(T+i);

        }

        M = S / n;


        // Affichage de la nouvelle moyenne
        printf("La moyenne des elements du tableau est : %.2f\n", M);


        // Demande d'ajout, saisie et lecture d'autres éléments
        printf("Voulez-vous ajouter d'autres elements (O/N) ? : \n");
        scanf(" %c", &reponse);

    }


    // Libération de la mémoire
    free(T);

    return 0;
}
