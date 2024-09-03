#include <stdio.h>


int main() {

    float X, Y, somme, produit, difference, division;

    printf("Donner une 1ere valeur : ");
    scanf("%f", &X);

    printf("Donner une 2eme valeur : ");
    scanf("%f", &Y);

    somme = X + Y;
    produit = X * Y;
    difference = X - Y;
    division = X / Y;

    printf("La somme est : %.2f\n", somme);
    printf("Le produit est : %.2f\n", produit);
    printf("La difference est : %.2f\n", difference);
    printf("La division est : %.2f\n", division);

    return 0;
}
