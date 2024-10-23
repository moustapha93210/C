#include <stdio.h>
#include <stdlib.h>

int main() {

    int *n = malloc(sizeof(int) );
    int *s = malloc(sizeof(int) );
    int i;


    // Saisie et lecture de 'n'
    printf("Veuillez saisir n : ");
    scanf("%d", n);


    // Calculer la somme des nombres impairs jusqu'à 'n'
    *s = 0;

    for(i = 1; i <= *n; i += 2)
        *s = *s + i;


    // Affichage de la somme
    printf("La somme des nombres impairs de 1 a 4 : %d", *s);


    // Libération de la mémoire
    free(s);
    free(n);


    return 0;
}
