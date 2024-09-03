#include <stdio.h>
#include <math.h>

float a, b, c;
float delta;


float discriminant(){

    delta = pow(b, 2)  - ( 4 * a * c );

    return delta;
}

void solution(){

    float x1, x2, x;

    if(delta < 0)
        printf("Il n'y a pas de solutions.\n");
    else if(delta == 0){

        x = (-b) / ( 2 * a);

        printf("La solution est : %.2f.\n", x);
    }
    else{
        x1 = ( -b - sqrt(delta) ) / (2 * a );

        x2 = ( -b + sqrt(delta) ) / (2 * a );

        printf("Solution 1 = %.2f.\n", x1);
        printf("Solution 2 = %.2f.\n", x2);
    }

}



int main(){

    // Saisie, contrôle et lecture de a
    recA:
    printf("Veuillez entrer a : \n");
    if( scanf("%f", &a) != 1 ){
        printf("Erreur ! Veuillez entrer un nombre.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recA;// Recommence la boucle si la saisie est invalide
    }

    // Saisie, contrôle et lecture de b
    recB:
    printf("Veuillez entrer b : \n");
    if( scanf("%f", &b) != 1 ){
        printf("Erreur ! Veuillez entrer un nombre.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recB;// Recommence la boucle si la saisie est invalide
    }

    // Saisie, contrôle et lecture de b
    recC:
    printf("Veuillez entrer c : \n");
    if( scanf("%f", &c) != 1 ){
        printf("Erreur ! Veuillez entrer un nombre.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recC;// Recommence la boucle si la saisie est invalide
    }

    printf("Discriminant = %.2f\n", discriminant());
    solution();


    return 0;
}






