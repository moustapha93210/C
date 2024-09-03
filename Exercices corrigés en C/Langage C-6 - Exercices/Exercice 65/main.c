#include <stdio.h>

int main(){

    int T[8], Frq[8];
    int i, j, compteur;


    // Remplissage du tableau T[8]
    printf("Veuillez saisir les elements du tableau : \n");

    for(i = 0; i < 8; i++){

        printf("T[%d] = ", i);
        scanf("%d", &T[i]);

    }


    // Remplissage du tableau Frq[8]
    for(i = 0; i < 8; i++){

        Frq[i] = -1;

    }


    // Comparaison des éléments du tableau T[8] pour trouver les éléments Non-Unique
    for(i = 0; i < 8; i++){

        compteur = 1;

        for(j = i+1; j < 8; j++){
            if(T[i] == T[j]){
                compteur++;
                Frq[j] = 0;
            }
        }
        if(Frq[i] != 0)
            Frq[i] = compteur;
    }


    // Affichage des éléments Non Unique du tableau T[8]
    printf("\nLes elements qui ne sont pas unique du tableau T sont : \n");

    for(i = 0; i < 8; i++){

        if(Frq[i] >= 2)
            printf( "%d ", T[i]);

    }






    return 0;
}
