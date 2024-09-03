#include <stdio.h>

int main() {

    float largeur, longueur, surface, perimetre;

    printf("Veuillez taper la largeur du rectangle : ");
    scanf("%f", &largeur);

    printf("Veuillez taper la longueur du rectangle : ");
    scanf("%f", &longueur);

    surface = longueur * largeur;
    perimetre = 2 * (longueur + largeur);

    printf("La surface du rectangle est de %.2f cm.\n", surface);
    printf("Le perimetre du rectangle est de %.2f cm.\n", perimetre);


    return 0;
}
