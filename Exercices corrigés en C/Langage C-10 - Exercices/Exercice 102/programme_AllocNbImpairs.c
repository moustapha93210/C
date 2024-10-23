#include <stdio.h>
#include <stdlib.h>

int main() {

    int *n = malloc(sizeof(int) );
    int *s = malloc(sizeof(int) );
    int i, r;


    // Saisie et lecture de 'n'
    printf("Veuillez saisir n : ");
    scanf("%d", n);


    // Calculer la somme des nombres impairs jusqu'à 'n'
    *s = 0;

    for(i = 0; i <= *n; i++){

        // Calculer le reste
        r = i % 2;

        // Si le reste est égal à 1 cela veut dire que 'i' est impair
        if(r == 1){

            // Somme des chiffres impairs jusqu'à "*n"
            *s = *s + i;
            printf("s = %d + %d = %d\n", *s, i, *s);

        }

    }


    // Affichage de la somme
    printf("\nSomme de tous les nombres impairs de 1 a %d : %d", *n, *s);


    // Libération de la mémoire
    free(s);
    free(n);



    return 0;
}
