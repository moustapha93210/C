#include <stdio.h>
#include <string.h>

int main() {

    char c[10];
    char c2[10];
    int i, tailleChaine, nbOccurrence;

    // Saisie et lecture du mot choisi par l'utilisateur
    printf("Veuillez entrer une chaine de caractere : ");
    gets(c);

    // Mets en minuscule toutes les lettres du tableau
    strlwr(c);

    // Compte le nombre de caractère présent dans le tableau de caractère saisie par l'utilisateur
    tailleChaine = strlen(c);

    //printf("\nTaille de la chaine = %d\n", tailleChaine);

    printf("%s\n", c);


    // Mets dans c2[10] le tableau inverse de c[10]
    for(i = 0; i < tailleChaine; i++){

        c2[(tailleChaine - 1) - i] = c[i];

    }

    printf("%s\n", c2);


    //Compte le nombre d'occurrence entre les 2 chaînes
    nbOccurrence = 0;

    for(i = 0; i < tailleChaine; i++){

        if(c[i] == c2[i]){

            nbOccurrence++;

            /*
            printf("c[%d] = %c\n", i, c[i]);
            printf("c2[%d] = %c\n", i, c2[i]);
            */

        }
        /*
        else {

            printf("c[%d] = %c\n", i, c[i]);
            printf("c2[%d] = %c\n", i, c2[i]);

        }
        */
    }

    //printf("\nNb Occurrence = %d\n", nbOccurrence);


    // Affiche si la chaîne est palindromique ou non
    if( nbOccurrence == (tailleChaine) )
        printf("La chaine est palindromique.\n");
    else
        printf("La chaine n'est pas palindromique.\n");




    return 0;
}

