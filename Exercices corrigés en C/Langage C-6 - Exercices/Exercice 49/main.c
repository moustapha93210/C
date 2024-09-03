#include <stdio.h>

int main(){

    int T[10];
    int i;

    for(i = 0; i < 10; i++){

        T[i] = 0;

    }

    for(i = 0; i < 10; i++){

        printf("T[%d] = %d \n", i + 1, T[i]);

    }



    return 0;
}
