#include <stdio.h>

int main(){

    int N, i, U, U0;

    printf("Veuillez saisir un entier n : \n");
    scanf("%d", &N);

    U = 6;
    U0 = 6;

    do {

        for(i = 1; i <= N; i++){

            U = 4 * U + 10;

            printf("U%d = 4 x U%d + 10\n", i, i - 1);
            printf("U%d = 4 x %d + 10 = %d\n\n", i, U0, U);

            U0 = U;

        }


    }while( ( N > 0 || N < 0 ) && i <= N);






    return 0;
}
