#include <stdio.h>



int main(){

    int T[5] = {3, -6, 14, 8, 24};
    int *p;

    p = T;

    p++;
    printf("%d\n", *p);
    printf("%d\n", *(p++) );

    p--;
    printf("%d\n", *p);



    return 0;
}