#include <stdio.h>

int main(){

    float reel, T[10], S, P, M;
    int i, j;

    printf("Veuillez saisir les elements du tableau : \n");

    // Saisir 10 réels et les stockes dans un tableau
    for(i = 0; i < 10; i++){

        printf("T[%d] = ", i + 1);
        scanf("%f", &T[i]);

    }

    S = 0;
    P = 1;

    for(i = 0; i < 10; i++){

        S = S + T[i];
        P = P * T[i];

    }

    M = S / 10;

    printf("La somme est : %.2f\n", S);
    printf("Le produit est : %.2f\n", P);
    printf("La moyenne est : %.2f\n", M);



    return 0;
}
