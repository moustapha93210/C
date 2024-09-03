#include <stdio.h>

int main(){

    int a = 10;

    int b = 5;

    int tab[3] = {1, 2, 3};

    int *p;


    tab[0] = a;

    *(tab+1) = b;

    p = tab + 2;


    *p = *(p-1);

    --p;

    *p = *(p-1);

    --p;

    *p = *(p+2);



    return 0;
}
