#include <stdio.h>

int main(){

    int L;
    int i, j;

    recLosL:
    printf("Veuillez entrer un nombre de ligne pour votre losange d'etoile : \n");
    if( scanf("%d", &L) !=1 || L <= 0 ){
        printf("Erreur ! Veuillez entrer un nombre entier.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recLosL;// Recommence la boucle en cas de saisie incorrect
    }

    for(i = 1; i <= L; i++){

        for(j = 1; j <= L - i; j++){

            printf("   ");

        }

        for(j = 1; j <= L ; j++){

            printf("* ");

        }

        printf("\n");





    }





    return 0;
}
