#include <stdio.h>

int main(){

    int L, C;
    int i, j;

    recCarL:
    printf("Veuillez entrer un nombres de lignes pour votre carree d'etoile : \n");
    if( scanf("%d", &L) != 1 ){
        printf("Erreur ! Veuillez entrer un nombre entier.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recCarL;// Recommence la boucle si l''entrée est invalide
    }


    for(i = 1; i <= L; i++){

        printf("\n* ");

        for(j = 1; j <= L - 1; j++){

            if(i == 1)
                printf(" * ");
            else if(i == L)
                printf(" * ");
            else if(j == 0)
                printf(" * ");
            else if(j == L - 1)
                printf(" * ");
            else if(i - 1 == j)
                printf(" * ");
            else if(j == ( L - 1 ) - i + 1)
                printf(" * ");
            else
                printf("   ");
        }

    }




    return 0;
}
