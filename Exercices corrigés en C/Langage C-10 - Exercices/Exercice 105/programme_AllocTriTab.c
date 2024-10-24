#include <stdio.h>
#include <stdlib.h>

void * triCroissant(float *TE, float taille){
    
    float *TE = calloc(taille, sizeof(float) );
    float *TC = calloc(taille, sizeof(float) );

    int i, j;





    return TC;


}



int main(){

    int n, i;


    // Saisie et lecture de la taille du tableau
    recn:
    printf("Veuillez saisir la taille du tableau : ");
    if(scanf("%d", &n) != 1 || n <= 0){

        printf("Erreur ! Veuillez choisir un nombre positif et superieur a zero.\n");
        while(getchar() != '\n');// Vide le buffer d'entrée
        goto recn;// Recommence la boucle si la saisie est invalide

    }


    // Allocation dynamique de la mémoire pour le tableau de taille 'n'
    float *T = calloc(n, sizeof(float) );


    // Saisie et lecture des éléments du tableau
    printf("Veuillez saisir les elements du tableau : \n");

    for(i = 0; i < n; i++){

        recTab:
        printf("T[%d] = ", i);
        if(scanf("%d", T+i) != 1){

            printf("Erreur ! Veuillez choisir un nombre.\n");
            while(getchar() != '\n');// Vide le buffer d'entrée
            free(T+i);// Libération de la mémoire alloué dynamiquement pour la case du tableau T[i]
            goto recTab;// Recommence la boucle si la saisie est invalide

        }

    }

    triCroissant(T, n);
    
    
    
    return 0;
}
