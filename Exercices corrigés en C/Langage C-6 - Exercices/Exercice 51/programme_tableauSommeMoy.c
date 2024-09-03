#include <stdio.h>

int main(){

    float reel, T[10], S, produit, moy;
    int i, j;

    printf("Veuillez saisir 10 reels \n");

    // Saisir 10 réels et les stockes dans un tableau
    for(i = 0; i < 10; i++){

        printf("reel numero %d : \n", i + 1);
        scanf("%f", &T[i]);

    }

    // Affiche le tableau
    for(i = 0; i < 10; i++){

        printf("T[%d] = %.2f\n", i, T[i]);

    }

    // Calcule la somme
    S = 0;

    for(i = 0; i < 10; i++){

        S = S + T[i];

    }
    printf("La somme de ce tableau de 10 reels est de : %.2f\n", S);

    // Calcule le produit
    produit = 1;

    for(i = 0; i < 10; i++){

        produit = produit * T[i];

    }
    printf("Le produit de ce tableau de 10 reels est de : %.2f\n", produit);

    // Calcule la moyenne
    for(i = 0; i < 10; i++){

        moy = moy + T[i];

    }
    printf("La moyenne de ce tableau de 10 reels est de : %.2f", moy / 10);



    return 0;
}
