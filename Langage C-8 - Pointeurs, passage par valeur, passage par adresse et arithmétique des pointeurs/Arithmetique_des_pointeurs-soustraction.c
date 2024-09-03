#include <stdio.h>



int main(){

    int T[5] = {3, -6, 14, 8, 24};
    int *p;

    p = T;

    int *q;

    q = &T[3];

    //q = q - 2;

    printf("%p\n", q - 2);
    printf("%d\n", *(q-2) );


    return 0;
}