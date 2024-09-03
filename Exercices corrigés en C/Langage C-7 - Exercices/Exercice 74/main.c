#include <stdio.h>


float diametre(float R){

    float d;

    d = R * 2;

    return d;
}

float surface(float R){

    return R * R * 3.14;
}

float perimetre(float R){

    return 2 * R * 3.14;
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

    printf("Le diametre du cercle est : %.2f\n", diametre(R));
    printf("La surface du cercle est : %.2f\n", surface(R));
    printf("Le perimetre du cercle est : %.2f\n", perimetre(R));




    return 0;
}
