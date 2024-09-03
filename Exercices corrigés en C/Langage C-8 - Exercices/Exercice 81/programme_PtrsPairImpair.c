#include <stdio.h>

int main() {

    int a;
    int *p = &a;

    recA:
    printf("Veuillez saisir un nombre : \n");
    if( scanf("%d", &a) != 1 ){

        printf("Erreur ! Veuillez entrer un nombre.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recA;// Recommence la boucle si la saisie et invalide
    }

    if(*p % 2 == 0)
        printf("%d est pair\n", *p);
    else
        printf("%d est impair\n", *p);





    return 0;
}
