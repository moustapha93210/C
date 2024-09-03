#include <stdio.h>

int main(){

    int T[8], Frq[8];
    int i, j, compteur;


    // Remplissage du tableau T[8]
    printf("Veuillez saisir les 8 entiers du tableau T : \n");

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


    // Remplissage du tableau Frq[8]
    for(i = 0; i < 8; i++){

        Frq[i] = -1;

        printf("Frq[%d] = %d\n", i, Frq[i]);

    }

    printf("\n");


    // Comparaison des éléments du tableau T[8] pour trouver les éléments Non-Unique
    for(i = 0; i < 8; i++){

        compteur = 1;

        for(j = i+1; j < 8; j++){

            if(T[i] == T[j]){

                compteur++;
                Frq[j] = 0;

                printf("Frq[%d] == Frq[%d] (%d == %d)\n", i, j, T[i], T[j]);
                printf("compteur = %d\n", compteur);
                printf("Frq[%d] = 0\n\n", j);

            }
        }

        if(Frq[i] != 0){

            Frq[i] = compteur;

            printf("Frq[%d] = %d\n\n", i, compteur);
        }
    }

    printf("\n");


    // Affichage du tableau Frq[8] après les comparaison
    for(i = 0; i < 8; i++){

        printf("Frq[%d] = %d\n", i, Frq[i]);

    }

    printf("\nLes elements Non-Unique du tableau T[8] sont : \n");

    // Affichage des éléments Non Unique du tableau T[8]
    for(i = 0; i < 8; i++){

        if(Frq[i] >= 2)
            printf("T[%d] = %d\n", i, T[i]);

    }






    return 0;
}
