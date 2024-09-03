#include <stdio.h>

int main(){

    int T[8];
    int i, j, tmp;


    // Saisir les éléments du tableau T
    printf("Veuillez saisir les elements du tableau : \n");

    for(i = 0; i < 8; i++){

        recTab:
        printf("T[%d] = ", i);
        if( scanf("%d", &T[i]) != 1 ){
            printf("Erreur ! Veuillez entrer un nombre.\n");
            while(getchar() != '\n');// Vider le buffer d'entrée
            goto recTab;// Recommencer la boucle si la saisie est invalide

        }
    }


    // Comparer les éléments du tableau T et les ranger dans l'ordre croissant
    for(i = 0; i < 8; i++){

        for(j = i+1; j < 8; j++){

            if(T[i] < T[j]){

                printf("i = %d\t j = %d\n", i, j);
                printf("Avant changement : \n");
                printf("T[%d] = %d\t", i, T[i]);
                printf("T[%d] = %d\n", j, T[j]);

                tmp = T[i];
                T[i] = T[j];
                T[j] = tmp;

                printf("Apres changement : \n");
                printf("T[%d] = %d\t", i, T[i]);
                printf("T[%d] = %d\n\n", j, T[j]);
            }
        }
    }


    // Afficher le tableau T ranger dans l'odre décroissant
    printf("Tableau T ranger dans l'odre decroissant : \n");

    for(i = 0; i < 8; i++){

        printf("T[%d] = %d\n", i, T[i]);

    }



    return 0;
}
