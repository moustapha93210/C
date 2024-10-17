#include <stdio.h>
#include <string.h>

char * suppression(char * C, char lettre){

    int i, j, Taille;

    Taille = strlen(C);

    // Suppression de l'occurence choisie par l'utilisateur
    for(i = 0; i < Taille; i++){

        if(C[i] == lettre){

            // Décallage à gauche
            for(j = i; j < Taille; j++){

                printf("C[%d] = %c\n", j, C[i]);
                printf("C[%d] = %c\n", j+1, C[j+1]);

                C[j] = C[j+1];

                printf("C[%d] = %c\n\n", j, C[j+1]);
            }

            i--;
            Taille--;
        }
    }


    return C;
}


int main() {

    char C[100];
    char lettre;


    // Saisie, lecture et affectation de la taille de la C
    printf("Veuillez saisir une C : ");
    gets(C);



    // Saisie, lecture et affectation de la taille de la C
    printf("Veuillez choisir une lettre a supprimer : ");
    scanf("%c", &lettre);


    char * R = suppression(C, lettre);

    printf("%s", R);


    return 0;
}
