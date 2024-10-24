#include <stdio.h>
#include <stdlib.h>



int main(){

    int n, min, i;


    // Saisie et lecture de la taille du tableau
    printf("Saisir la taille du tableau : ");
    scanf("%d", &n);


    // Allocation dynamique du tableau avec "calloc()"
    int *T = calloc(n, sizeof(int) );


    if(T == NULL){

        printf("La memoire n'est pas allouee.\n");
        exit(0);

    }


    // Saisie et lecture des éléments du tableau
    for(i = 0; i < n; i++){

        printf("Entrer l'element  T[%d] = ", i);
        scanf("%d", T+i);

    }


    // Recherche du plus petit éléments du tableau
    min = *T;

    for(i = 0; i < n; i++){

        if( min > *(T+i) )
            min = *(T+i);

    }

    // Affichage du plus petit éléments du tableau
    printf("Le min des elements du tableau est : %d", min);

    // Libération de la mémoire
    free(T);





    return 0;
}