#include <stdio.h>

int main(){

    int T[10];
    int i, max, indice_max;

    for(i = 0; i < 10; i++){

        printf("T[%d] = ", i);
        scanf("%d", &T[i]);

    }

    max = T[0];

    for(i = 0; i < 10; i++){

        if(max < T[i]){

            max = T[i];
            indice_max = i;

        }

    }

    printf("Maximum : T[%d] = %d", indice_max, max);




    return 0;
}
