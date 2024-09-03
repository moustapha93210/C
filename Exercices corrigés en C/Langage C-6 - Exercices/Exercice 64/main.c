#include <stdio.h>

int main(){

    int T[8], Frq[8];
    int i, j, compteur;

    printf("Veuillez saisir les elements du tableau : \n");

    // Remplissage du Tableau T[8]
    for(i = 0; i < 8; i++){

        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);

    }


    //Remplissage du tableau Frq[8]
    for(i = 0; i < 8; i++){

        Frq[i] = -1;

    }


    //Compare les éléments du tableau pour trouver les éléments unique
    for(i = 0; i < 8; i++) {

        compteur = 1;

        for(j = i + 1; j < 8; j++){

            if(T[i] == T[j]){

                compteur++;
                Frq[j] = 0;

            }
        }

        if (Frq[i] != 0)
            Frq[i] = compteur;

    }



    // Affichage des éléments uniques du tableau
    printf("Les elements unique du tableau sont : \n");

    for(i = 0; i < 8; i++) {

        if (Frq[i] == 1)
            printf("%d , ", T[i]);

    }


    return 0;
}
