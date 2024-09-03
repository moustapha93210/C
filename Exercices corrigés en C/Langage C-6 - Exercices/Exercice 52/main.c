#include <stdio.h>

int main(){

    float U[3], V[3], P;
    int i;


    for(i = 0; i < 3; i++){

        printf("U[%d] = ", i+1);
        scanf("%f", &U[i]);

        printf("V[%d] = ", i+1);
        scanf("%f", &V[i]);

        printf("\n");

    }

    //P = U[0] * V[0] + U[1] * V[1] + U[2] * V[2]
    P = 0;
    for(i = 0; i < 3; i++){

        P = P + U[i] * V[i];

    }

    printf("Le Produit scalaire des deux vecteurs est : %.2f", P);




    return 0;
}
