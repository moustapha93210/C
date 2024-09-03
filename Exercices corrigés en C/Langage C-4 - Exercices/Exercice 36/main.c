#include <stdio.h>

int main(){

    int i, j;

    printf("x*y\t|\t");

    for(i = 1; i <= 10; i++)
        printf("%d\t", i);

    printf("\n");

    for(i = 1; i <=15; i++)
        printf("------");

    printf("\n");

    for(i = 1; i <= 10; i++){
        printf("%d\t|\t", i);

        for(j = 1; j <= 10; j++)
            printf("%d\t", i*j);
        printf("\n");

    }







    return 0;
}
