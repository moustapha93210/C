#include <stdio.h>

int main(){


    int T[6], TI[6];
    int i, j;


    printf("Tableau initial : \n");
    for(i = 0; i < 6; i++){

        recTab:
        printf("T[%d] = ", i);
        if( scanf("%d", &T[i]) != 1){
            printf("Erreur ! Veuillez entrer un nombre.\n");
            while(getchar() != '\n');
            goto recTab;
        }

    }

    printf("Tableau d'Entree : \n");

    for(i = 0; i < 6; i++){

        printf("%d\n", T[i]);

    }

    for(i = 0; i < 6; i++){

        TI[5-i] = T[i];

    }

    printf("Tableau Inverse : \n");

    for(i = 0; i < 6; i++){

        printf("%d\n", TI[i]);

    }



    return 0;
}
