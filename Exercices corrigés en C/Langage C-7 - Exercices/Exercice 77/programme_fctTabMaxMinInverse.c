#include <stdio.h>


float maximum(float T[]){

    float Max, Max0;
    int i, j;


    Max = T[0];
    Max0 = T[0];

    for(i = 0; i < 10; i++){

        for(j = i+1; j < 10; j++){

            if(Max < T[j]){

                Max = T[j];

                printf("Max = %.2f\n", Max0);
                printf("Max < T[%d]\n", j);
                printf("%.2f < %.2f\n", Max0, T[j]);
                printf("Max = T[%d]\n", j);
                printf("Max = %.2f\n\n", T[j]);

                Max0 = Max;

            }

        }

    }

    return Max;
}


float minimum(float T[]){

    float Min, Min0;
    int i, j;


    Min = T[0];
    Min0 = T[0];

    for(i = 0; i < 10; i ++){

        for(j = i+1; j < 10; j++){

            if(Min > T[j]){

                Min = T[j];

                printf("Min = %.2f\n", Min0);
                printf("Min > T[%d]\n", j);
                printf("%.2f > %.2f\n", Min0, T[j]);
                printf("Min = T[%d]\n", j);
                printf("Min = %.2f\n\n", T[j]);

                Min0 = Min;
            }
        }
    }


    return Min;
}


void inverse(float T[]){

    float TI[10];
    int i;

    for(i = 0; i < 10; i++)
        TI[9 - i] = T[i];

    printf("Tableau inverse : \n");

    for(i = 0; i < 10; i++)
        printf("TI[%d] = %.2f\n", i, TI[i]);

}




int main(){

    float T[10];
    int i;

    //Saisie, contrôle et lecture de T
    printf("Veuillez saisir les elements du tableau : \n");

    for(i = 0; i < 10; i++){

        recTab:
        printf("T[%d] = ", i);
        if(scanf("%f", &T[i]) != 1){

            printf("Erreur ! Veuillez saisir un nombre.\n");
            while(getchar() != '\n');// Vider le buffer d'entrée
            goto recTab;// Recommence la boucle si la saisie est invalide
        }
    }


    printf("Le plus grand des elements du tableau T est : %.2f\n\n", maximum(T));
    printf("Le plus petit des elements du tableau T est : %.2f\n\n", minimum(T));


    inverse(T);

    return 0;
}
