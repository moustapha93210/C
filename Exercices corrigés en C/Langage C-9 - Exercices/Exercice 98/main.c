#include <stdio.h>
#include <string.h>

char * suppression(char * C, char S){

    int i, j;
    int len = strlen(C);

    // Suppression de l'occurence choisie par l'utilisateur
    for(i = 0; i < len; i++){

        if(C[i] == S){

            // Décallage à gauche
            for(j = i; j < len; j++)
                C[j] = C[j+1];

            i--;
            len--;
        }
    }

    return C;
}


int main() {

    char C[100];
    char S;


    // Saisie, lecture et affectation de la taille de la C
    printf("Veuillez saisir une C : ");
    gets(C);


    // Saisie, lecture et affectation de la taille de la C
    printf("Veuillez choisir une S a supprimer : ");
    scanf("%c", &S);

    char * R = suppression(C, S);

    printf("La chaine apres la suppression de '%c' : %s", S, C);


    return 0;
}
