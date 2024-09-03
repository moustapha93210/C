#include <stdio.h>



int main(){

    int T[5] = {3, -6, 14, 8, 24};

    printf("%d\n", T[0]);
    printf("%p\n", T);
    printf("%d\n", &T[0]);
    printf("%d\n", *T);


    return 0;
}