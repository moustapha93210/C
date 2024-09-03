#include <stdio.h>

int main(){

    float U[3], V[3], UxV;
    int i;

    // Saisir et remplir U[i]
    for(i = 0; i < 3; i++){

        printf("U[%d] = ", i);
        scanf("%f", &U[i]);

    }

    printf("\n");

    // Saisir et remplir V[i]
    for(i = 0; i < 3; i++){

        printf("V[%d] = ", i);
        scanf("%f", &V[i]);

    }

    printf("\n");

    //Afficher le produit scalaire
    UxV = 0;

    for(i = 0; i < 3; i++){

        UxV = UxV + (U[i] * V[i]);

    }

    printf("UxV = %2.f\n", UxV);



    return 0;
}
