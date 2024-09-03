#include <stdio.h>

int main(){

    int C;
    int i, j, P;

    recTriC:
    printf("Veuillez entrer le nombres de colones de votre triangle d'etoile : \n");
    if( scanf("%d", &C) != 1 ){
        printf("Erreur ! Veuillez entrer un nombre entier.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recTriC; // Recommence la bouche si l'entrée est invalide
    }

    P = 1;

    for(i = 1; i <= (C * 2 - 1); i++){

        printf("\n");


        for(j = 1; j <= P; j++){

            printf(" * ");

        }

        if(i < C)
            P++;
        else
            P--;

    }


    return 0;
}
