#include <stdio.h>

int main(){

    int T[10];
    int i, Max1, Max2;

    printf("Veuillez saisir les elements du tableau : \n");

    for(i = 0;i < 10; i++){

        recNb:
        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);

    }

    Max1 = T[0];
    Max2 = T[0];

    for(i = 1; i < 10; i++){

        if(T[i] > Max1){

            Max2 = Max1;
            Max1 = T[i];

        }
        else if(T[i] > Max2 && T[i] < Max1){

            Max2 = T[i];

        }

    }

    printf("Le 1er plus grand element du tableau T : %d\n", Max1);
    printf("Le 2eme plus grand element du tableau T : %d\n", Max2);





    return 0;
}
