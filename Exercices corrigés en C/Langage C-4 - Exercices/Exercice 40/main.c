#include <stdio.h>

int main(){

    int N, Inverse;

    printf("Veuillez entrer un nombre entier : \n");
    scanf("%d", &N);

    Inverse = 0;

    do {

        Inverse = (Inverse * 10) + (N % 10);
        N = N / 10;

    }while(N != 0);

    printf("L'inverse est : %d\n", Inverse);


    return 0;
}
