#include <stdio.h>

int main(){


    int TE[6], TS[6];
    int i;


    printf("Veuillez saisir les elements du tableau initial : \n");
    for(i = 0; i < 6; i++){

        printf("TE[%d] = ", i);
        scanf("%d", &TE[i]);

    }

    for(i = 0; i < 6; i++){

        TS[5-i] = TE[i];

    }

    printf("Les elements du tableau inversee sont  : \n");

    for(i = 0; i < 6; i++){

        printf("TS[%d] = %d  \n", i, TS[i]);

    }



    return 0;
}
