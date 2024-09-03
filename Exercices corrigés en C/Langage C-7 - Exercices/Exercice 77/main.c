#include <stdio.h>


int maximum(int T[]){

    int max, i;

    max = T[0];

    for(i = 0; i < 10; i++){

        if(T[i] > max)
            max = T[i];

    }

    return max;
}


int minimum(int T[]){

    int min, i;

    min = T[0];

    for(i = 0; i < 10; i++){

        if(T[i] < min)
            min = T[i];

    }


    return min;
}


void inverse(int TE[]){

    int TS[10];
    int i;

    for(i = 0; i < 10; i++)
        TS[9 - i] = TE[i];

    printf("Les elements du tableau inverse sont : \n");

    for(i = 0; i < 10; i++)
        printf("TS[%d] = %d\n", i+1, TS[i]);

}



int main(){

    int T[10];
    int i;

    //Saisie et lecture de T
    printf("Veuillez saisir les elements du tableau : \n");

    for(i = 0; i < 10; i++){

        printf("T[%d] = ", i+1);
        scanf("%d", &T[i]);

    }

    printf("Le max des elements du tableau est : %d\n", maximum(T));
    printf("Le min des elements du tableau T est : %d\n", minimum(T));
    inverse(T);

    return 0;
}
