#include <stdio.h>

int main(){

    int T[8], Frq[8];
    int i, j, compteur;

    printf("Veuillez remplir le tableau : \n");

    // Remplissage du Tableau T[8]
    for(i = 0; i < 8; i++){

        recTab:
        printf("T[%d] = ", i);
        if( scanf("%d", &T[i]) != 1 ){
            printf("Erreur ! Veuillez entrer un nombre.\n");
            while(getchar() != '\n');// Vider le buffer d'entrée
            goto recTab;
        }

    }

    printf("\n");


    //Remplissage du tableau Frq[8]
    for(i = 0; i < 8; i++){

        Frq[i] = -1;

        printf("Frq[%d] = %d\n", i, Frq[i]);

    }

    printf("\n");


    //Compare les éléments du tableau pour trouver les éléments unique
    for(i = 0; i < 8; i++) {

        compteur = 1;

        for(j = i + 1; j < 8; j++){

            if(T[i] == T[j]){

                compteur++;
                Frq[j] = 0;

                printf("T[%d] == T[%d]\n", i, j);
                printf("compteur = %d\n", compteur);
                printf("Frq[%d] = 0\n", j);
            }
        }

        if (Frq[i] != 0){

            Frq[i] = compteur;

            printf("Frq[%d] = %d\n\n", i, compteur);
        }

    }


    //Affichage du tableau Frq[8] après la comparaison pour trouver des éléments uniques du tableau T[8]
    printf("Frq[8] apres comparaison : \n");

    for(i = 0; i < 8; i++){

        printf("Frq[%d] = %d\n", i, Frq[i]);

    }


    // Affichage des éléments uniques du tableau
    printf("Les elements unique du tableau sont : \n");

    for(i = 0; i < 8; i++) {


        if (Frq[i] == 1)
            printf("T[%d] = %d\n", i, T[i]);


    }


    return 0;
}
