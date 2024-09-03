#include <stdio.h>

int main(){

    int L;
    int i, j;

    recTriL:
    printf("Veuillez entrer le nombres de lignes de votre triangle d'etoile : \n");
    if( scanf("%d", &L) != 1 ){
        printf("Erreur ! Veuillez entrer un nombre entier.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recTriL; // Recommence la bouche si l'entrée est invalide
    }

    for(i = 1; i <= L; i++){

        printf("\n");

        for(j = 1; j <= L - i; j++){

                printf("   ");

        }

        for(j = 1; j <= (2 * i - 1); j++){

            if(i == L)
                printf(" * ");
            else if(j == 1)
                printf(" * ");
            else if( j == (2 * i - 1) )
                printf(" * ");
            else
                printf("   ");

        }

    }



    return 0;
}
