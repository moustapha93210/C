#include <stdio.h>

int main(){

    int T[8];
    int i, j, tmp;


    // Saisir les éléments du tableau T
    printf("Veuillez saisir les elements du tableau : \n");

    for(i = 0; i < 8; i++){
        printf("T[%d] = ", i+1);
        scanf("%d", &T[i]);
    }


    // Comparer les éléments du tableau T et les ranger dans l'ordre croissant
    for(i = 0; i < 8; i++){

        for(j = i+1; j < 8; j++){

            if(T[i] < T[j]){

                tmp = T[i];
                T[i] = T[j];
                T[j] = tmp;

            }
        }
    }


    // Afficher le tableau T ranger dans l'odre décroissant
    printf("Les elements du tableau par odre decroissant : \n");

    for(i = 0; i < 8; i++){

        printf("%d ", T[i]);

    }



    return 0;
}
