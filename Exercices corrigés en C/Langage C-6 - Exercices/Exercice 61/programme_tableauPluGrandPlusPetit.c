#include <stdio.h>

int main(){

    int T[10];
    int i, Max1, Max2;

    for(i = 0;i < 10; i++){

        recNb:
        printf("T[%d] = ", i);
        if(scanf("%d", &T[i]) != 1){
            printf("Erreur ! Veuillez saisir un nombre;\n");
            while(getchar() != '\n');
            goto recNb;
        }

    }

    Max1 = T[0];
    Max2 = T[0];

    for(i = 0; i < 10; i++){

        if(T[i] > Max1){

            Max2 = Max1;
            Max1 = T[i];

        }
        else if(T[i] > Max2 && T[i] < Max1){

            Max2 = T[i];

        }

    }

    printf("1ère Valeur Maximal du tableau = %d\n", Max1);
    printf("2eme valeur maximale du tableau = %d\n", Max2);





    return 0;
}
