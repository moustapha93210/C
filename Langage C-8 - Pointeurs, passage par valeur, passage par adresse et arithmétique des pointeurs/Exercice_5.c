#include <stdio.h>



int main(){

    int T[10], i, min;
    int *p;

    p = T;

    printf("Veuillez saisir les elements du tableau : \n");

    for(i = 0; i < 10; i++){

        printf("T[%d] = ", i);
        scanf("%d", (T+i));

    }

    //min = T[0];
    //p = T;
    //min = *p;
    min = *T;

    for(p = T + 1; p < T + 10; p++){

        if(min > *p)
            min = *p;

    }

    printf("Le min du tableau est : %d", min);


    return 0;
}
