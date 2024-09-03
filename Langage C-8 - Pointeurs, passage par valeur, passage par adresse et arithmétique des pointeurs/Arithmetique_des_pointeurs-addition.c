#include <stdio.h>



int main(){

    int T[5] = {3, -6, 14, 8, 24};
    int *p;

    p = T;

    //p = p + 3;

    printf("%p\n", p+3);
    printf("%d\n", *(p+3) );


    return 0;
}