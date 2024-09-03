#include <stdio.h>

int main(){

    float T[10];
    float S, moy, notes;
    int i, supMoy, indice_supMoy;

    // Remplissage du tableau de notes T[0] de la classe
    for(i = 0; i < 10; i++){

        recNotes:
        printf("T[%d] = ", i);
        if( scanf("%f", &T[i]) != 1 || T[i] < 0 || T[i] > 20){
            printf("Erreur ! Veuillez entrer une note comprise entre 0 et 20.\n");
            while(getchar() != '\n');// Vider le buffer d'entrée
            goto recNotes;
        }

    }

    // Calcul de la moyenne de la classe
    S = 0;

    for(i = 0; i < 10; i++){

        S = S + T[i];

    }
    moy = S / 10;

    // Comptage des notes supérieur à la moyenne de la classe
    printf("Notes superieur a la moyenne de la classe : \n");

    supMoy = 0;

    for(i = 0; i < 10; i++){

        if(T[i] > moy){
            indice_supMoy = i;
            notes = T[i];
            supMoy++;

            printf("T[%d] = %.2f\n", indice_supMoy, notes);

        }

    }

    printf("Moyenne de la classe : %.2f/20\n", moy);
    printf("Nombre de notes superieur a la moyenne de la classe : %d\n", supMoy);




    return 0;
}
