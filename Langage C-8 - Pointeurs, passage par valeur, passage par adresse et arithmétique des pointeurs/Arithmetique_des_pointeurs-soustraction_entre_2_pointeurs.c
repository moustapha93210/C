#include <stdio.h>



int main(){

    int T[5] = {3, -6, 14, 8, 24};
    int *p;

    p = T;

    int *q;

    q = &T[3];

    printf("%d\n", q - p);
    printf("%d\n", p - q);


    return 0;
}