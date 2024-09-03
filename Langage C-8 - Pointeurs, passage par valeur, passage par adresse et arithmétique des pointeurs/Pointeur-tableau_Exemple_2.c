#include <stdio.h>


int main(){

    int T[5] = {3, -6, 14, 8, 24};
    int *p;

    p = T;

    *(T+1) = 2;
    printf("%d\n", T[1]);

    p++;
    printf("%d\n", *p);

    *(T+3) = 4;
    printf("%d\n", T[3]);

    *p += 5;
    printf("%d\n", *p);

    p = p + 2;
    printf("%d\n", *p);

    return 0;
}


