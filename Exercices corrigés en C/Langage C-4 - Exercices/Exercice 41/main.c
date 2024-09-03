#include <stdio.h>

int main(){

    int N, M, Inverse;

    printf("Veuillez saisir un nombre : \n");
    scanf("%d", &N);

    Inverse = 0;
    M = N;

    do {

        Inverse = (Inverse * 10) + (N % 10);
        N = N / 10;

    } while(N != 0);


    if(Inverse == M)
        printf("%d est un palindrome.\n", M);
    else
        printf("%d est non palindrome.\n", M);




    return 0;
}
