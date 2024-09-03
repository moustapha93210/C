#include <stdio.h>
#include <math.h>



const double pi = 3.14;


float diametreCercle(float rayon){

    float diametre;

    diametre = 2 * rayon;


    return diametre;
}

float surfaceCercle(float rayon){

    float surface;

    surface = pi * pow(rayon, 2);


    return surface;
}

float perimetreCercle(float rayon){

    float perimetre;

    perimetre = 2 * pi * rayon;


    return perimetre;
}




int main(){

    float R;


    // Saisie, contrôle et lecture du rayon du cercle entré par l'utilisateur
    recRayon:
    printf("Veuillez entrer le rayon du cercle : \n");
    if( scanf("%f", &R) != 1 ){
        printf("Erreur ! Veuillez entrer un nombre.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recRayon;
    }

    printf("Diametre du cercle = %.2f\n", diametreCercle(R));
    printf("Surface du cercle = %.2f\n", surfaceCercle(R));
    printf("Perimetre du cercle = %.2f\n", perimetreCercle(R));




    return 0;
}
