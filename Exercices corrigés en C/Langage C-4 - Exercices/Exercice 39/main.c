#include <stdio.h>

int main(){

    long N, M;
    int Nbr = 0;

    printf("Veuillez entrer un entier : \n");
    scanf("%ld", &N);

    M = N;

    do {

        Nbr++;

        N = N / 10;

    }while(N != 0);

    printf("Nombre total des chiffres dans le nombre %ld est : %d\n", M, Nbr);




    return 0;
}
