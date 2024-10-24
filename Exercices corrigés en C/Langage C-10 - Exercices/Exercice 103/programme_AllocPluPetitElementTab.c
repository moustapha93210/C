#include <stdio.h>
#include <stdlib.h>


int main(){

    int n, i, min, indice;


    // Saisie et lecture de la taille du tableau
    recn:
    printf("Donner la taille du tableau : ");
    if(scanf("%d", &n) != 1 || n <= 0){

        printf("Erreur ! Veuillez choisir un nombre positif et superieur a zero.\n");
        while(getchar() != '\n');// Vide le buffer d'entrée
        goto recn;// Recommence la boucle si la  saisie est invalide
    }


    // Allocation dynamique du tableau avec "calloc()"
    int *T = calloc(n, sizeof(int) );


    if(T == NULL){

        printf("Erreur d'allocation memoire.\n");
        exit(0);

    }
    else{

        // Saisie et lecture des éléments du tableau
        for(i = 0; i < n; i++){

            printf("T[%d] = ", i);
            scanf("%d", T+i);

        }


        // Recherche du plus petit éléments du tableau
        min = *T;
        indice = 0;

        for(i = 0; i < n; i++){

            if( min > *(T+i) ){

                printf("\nAvant : \n");
                printf("min = T[%d] = %d\n", indice, min);

                min = *(T+i);
                indice = i;

                printf("Apres : \n");
                printf("min = T[%d] = %d\n\n", indice, min);

            }


        }

        // Affichage du plus petit éléments du tableau
        printf("La plus petite valeur du tableau est : T[%d] = %d\n", indice, min);

    }


    // Libération de la mémoire
    free(T);



    return 0;
}
