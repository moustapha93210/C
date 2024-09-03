#include <stdio.h>

int main(){

    int T[10];
    int i, min;

    for(i = 0; i < 10; i++){

        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);


    }

    min = T[0];

    for(i = 0; i < 10; i++){

        if(min > T[i]){

            min = T[i];

        }



    }

    printf("Le minimum des elements du tableau est : %d", min);





    return 0;
}
