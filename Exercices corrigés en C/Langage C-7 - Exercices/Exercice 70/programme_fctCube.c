#include <stdio.h>
#include <math.h>


// Définition de la fonction qui mettre au cube le réel saisie par l'utilisateur
void cubeReel(float R){

    printf("reel = %.2f \n", R);
    printf("(%.2f)^3 = %.2f\n\n", R, pow(R, 3) );

}

int main(){

    float R;

    // Saisie, contrôle et lecture du réel entrer par l'utilisateur
    recNombre:
    printf("Veuillez entrer un nombre : \n");
    if(scanf("%f", &R) != 1 ){
        printf("Erreur ! Veuillez entrer un nombre.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recNombre;// Recommence la boucle si la saisie est invalide
    }

    // Appel de la fonction cubeReel(R)
    cubeReel(R);




    return 0;
}
