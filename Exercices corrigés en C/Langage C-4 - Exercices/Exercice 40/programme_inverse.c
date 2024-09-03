#include <stdio.h>

int main(){

    int N, N0, Finverse, inverse, inverse0;

    printf("Veuillez entrer un nombre entier : \n");
    scanf("%d", &N);

    inverse0 = 0;
    inverse = 0;

    N0 = N;

    printf("Inverse = 0\n");

    do {

        inverse = (inverse * 10) + (N % 10);

        printf("Inverse = (%d x 10) + (%d // 10) \n", inverse, N);
        printf("Inverse = %d\n\n", inverse);

        N = N / 10;

        printf("N = %d / 10\n", N0);
        printf("N = %d\n\n", N);

    }while(N != 0);

    printf("Nombre initial : %d\n", N0);
    printf("Nombre inverse : %d\n", inverse);


    return 0;
}
