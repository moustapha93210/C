#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, S1, S2;

    printf("Veuillez saisir a, b et c : \n");
    scanf("%f %f %f", &a, &b, &c);

    const float delta = ( pow(b, 2) ) - (4 * a * c);

    //printf("delta = %.2f\n", delta);

    if(delta < 0){
        printf("La solution est l'ensemble vide\n");
    }
    else if(delta == 0){
        S1 = ( (-b) / (2 * a) );

        printf("La solution de l'equation degre est : %.2f", S1);
    }
    else if(delta > 0){
        S1 = ( (-b) - sqrt(delta) ) / (2 * a);
        S2 = ( (-b) + sqrt(delta) ) / (2 * a);

        printf("Les solutions de l'equation de second degre sont : %.2f et %.2f\n", S1, S2);
    }


    return 0;
}

