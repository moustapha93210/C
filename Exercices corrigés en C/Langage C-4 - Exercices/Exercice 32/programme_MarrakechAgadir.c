#include <stdio.h>

int main() {

    float populationMarrakech, populationMarrakech0, populationAgadir, populationAgadir0;
    int annee, i;

    populationMarrakech = 1000000;
    populationMarrakech0 = 1000000;

    populationAgadir = 500000;
    populationAgadir0 = 500000;

    annee = 0;
    i = 0;


    printf("Annee = %d\n", annee);
    printf("Population d'Agadir = %.2f\n\n", populationAgadir);

    while(populationMarrakech > populationAgadir){

        annee = annee + 1;
        populationMarrakech = populationMarrakech + 50000;
        populationAgadir = populationAgadir * 1.08;
        /*
        populationAgadir = 500 000 * 1.08 = 540 000;
        populationAgadir = 540 000 * 1.08 = 583 200;
        populationAgadir = 583 200 * 1.08 = 629 856;

        ...

        populationAgadir > populationMarrakech
        */

        printf("Annee = %d\n", annee);
        printf("Population d'Agadir = %.2f x 1.08 = %.2f\n", populationAgadir0, populationAgadir);

        printf("Annee = %d\n", annee);
        printf("Population de Marrakech = %.2f + 50 000 = %.2f\n\n", populationMarrakech0, populationMarrakech);

        i++;

        populationAgadir0 = populationAgadir;
        populationMarrakech0 = populationMarrakech;
    }

    printf("C'est a la %deme annee que la Population d'Agadir (%.0f habitants) depassera celle de Marrakech (%.0f habitants).", i, populationAgadir, populationMarrakech);


    return 0;
}
