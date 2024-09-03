#include <stdio.h>

int main(){

    int T[10];
    int i, max;

    for(i = 0; i < 10; i++){

        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);


    }

    max = T[0];

    for(i = 0; i < 10; i++){

        if(max < T[i]){

            max = T[i];

        }



    }

    printf("Le maximum des elements du tableau est : %d", max);





    return 0;
}