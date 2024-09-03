#include <stdio.h>

int main(){

    int T[8];
    int i, j, variableTemporaire;



    // Saisir les éléments du tableau
    recTab:
    printf("Veuillez saisir les elements du tableau : \n");

    for(i = 0; i < 8; i++){
        printf("T[%d] = ", i);
        if( scanf("%d",&T[i]) != 1 ){
            printf("Erreur ! Veuillez entrer un nombre entier positif.\n");
            while(getchar() !='\n');// Vider le buffer d'entrée
            goto recTab;// Recommence la boucle si la saisie est invalide
        }
    }

    printf("\n");

    // Comparaison des éléments du tableau pour les placer dans l'odre croissant
    for(i = 0; i < 8; i++){

        for(j = i+1; j < 8; j++){

            if(T[i] > T[j]){

                printf("Avant changement: \n");
                printf("T[%d] = %d\t", i, T[i]);
                printf("T[%d] = %d\n", j, T[j]);

                variableTemporaire = T[i];
                T[i] = T[j];
                T[j] = variableTemporaire;

                printf("Apres changement: \n");
                printf("T[%d] = %d\t", i, T[i]);
                printf("T[%d] = %d\n\n", j, T[j]);

            }

        }

    }


    // Affichage du tableau dans l'odre croissant
    printf("Les elements du tableau dans l'ordre croissant sont : \n");

    for(i = 0; i < 8;i++){

        printf("T[%d] = %d\n",i , T[i]);

    }





    return 0;
}
