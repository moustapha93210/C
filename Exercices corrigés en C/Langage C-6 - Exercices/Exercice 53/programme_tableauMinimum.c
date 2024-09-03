#include <stdio.h>

int main(){

    int T[10];
    int i, min, indice_min;

    for(i = 0; i < 10; i++){

        printf("T[%d] = ", i);
        scanf("%d", &T[i]);


    }

    min = T[0];

    for(i = 0; i < 10; i++){

        if(min > T[i]){

            min = T[i];
            indice_min = i;

        }



    }

    printf("Minimum : T[%d] = %d", indice_min, min);





    return 0;
}
