#include <stdio.h>

int main(){

    int L, C;
    int i, j;

    recCadreL:
    printf("Veuillez saisir un nomber de lignes pour votre cadre d'etoile : \n");
    scanf("%d", &L);

    printf("Veuillez saisir un nomber de colonnes pour votre cadre d'etoile : \n");
    scanf("%d", &C);

    for(i = 1; i <= L; i++){

        for(j = 1; j <= C; j++){

            if(i == 1 || i == L || j == 1 || j == C)
                printf("* ");
            else
                printf("  ");

        }

        printf("\n");


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
