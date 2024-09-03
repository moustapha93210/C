#include <stdio.h>

int main() {

    float largeur, longueur, S, P;

    printf("Veuillez entrer la largeur du rectangle : ");
    scanf("%f", &largeur);

    printf("Veuillez entrer la longueur du rectangle : ");
    scanf("%f", &longueur);

    P = 2 * (longueur + largeur);
    S = longueur * largeur;

    printf("Le perimetre du rectangle est de %.2f cm.\n", P);
    printf("La surface du rectangle est de %.2f cm.\n", S);

    return 0;
}
