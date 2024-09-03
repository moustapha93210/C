#include <stdio.h>

int main(){

    int T[8];
    int i, j, tmp;



    // Saisir les éléments du tableau
    printf("Veuillez saisir les elements du tableau : \n");

    for(i = 0; i < 8; i++){
        printf("T[%d] = ", i+1);
        scanf("%d",&T[i]);
    }


    // Comparaison des éléments du tableau pour les placer dans l'odre croissant
    for(i = 0; i < 8; i++){

        for(j = i+1; j < 8; j++){

            if(T[i] > T[j]){

                tmp = T[i];
                T[i] = T[j];
                T[j] = tmp;

            }
        }
    }


    // Affichage du tableau dans l'odre croissant
    printf("Les elements du tableau par ordre croissant : \n");

    for(i = 0; i < 8;i++){

        printf("%d ", T[i]);

    }





    return 0;
}
