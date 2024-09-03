#include <stdio.h>

int main(){

    int L, C,i, j;

    recCadreL:
    printf("Veuillez saisir un nomber de lignes pour votre cadre d'etoile : \n");
    if( scanf("%d", &L) != 1 ){
        printf("Erreur ! Veuillez entrer un nombre entier.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recCadreL;// Recommence la boucle si l'entrée est invalide
    }

    printf("Veuillez saisir un nomber de colonnes pour votre cadre d'etoile : \n");
    if( scanf("%d", &C) != 1 ){
        printf("Erreur ! Veuillez entrer un nombre entier.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recCadreL;// Recommence la boucle si l'entrée est invalide
    }

    for(i = 1; i <= L; i++){

        printf("\n* ");


        for(j = 1; j <= C - 1; j++){


            if(i == 1)
                printf(" * ");
            else if(i == L)
                printf(" * ");
            else if( j == (C - 1) )
                printf(" * ");
            else
                printf("   ");


        }


    }

    /*
    for(i = 1; i <= C - 1; i++){

        printf("* ");

        for(j = 1; j <= i; j++){

            printf("*");

        }

    }
    */



    return 0;
}
