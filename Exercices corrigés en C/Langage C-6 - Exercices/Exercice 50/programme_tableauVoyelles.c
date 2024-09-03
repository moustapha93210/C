#include <stdio.h>

int main(){

    char T[6];
    int i;

    T[0] = 'a';
    T[1] = 'e';
    T[2] = 'o';
    T[3] = 'u';
    T[4] = 'i';
    T[5] = 'y';

    for(i = 0; i < 6; i++){

        printf("T[%d] = %c \n", i, T[i]);

    }




    return 0;
}
