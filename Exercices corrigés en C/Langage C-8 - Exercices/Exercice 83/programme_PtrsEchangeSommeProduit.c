#include <stdio.h>

// Passage par référence (par adresse)
void echange(int *x, int *y){

    int tmp;

    if( ( *x > 0 && *y > 0 ) || ( *x < 0 && *y < 0 ) ){

        printf("%d et %d ont le meme signe.\n\n", *x, *y);

        printf("Avant echange : \n");
        printf("a = %d\n", *x);
        printf("b = %d\n\n", *y);

        tmp = *x;
        *x = *y;
        *y = tmp;

        printf("Apres echange : \n");
        printf("a = %d\n", *x);
        printf("b = %d\n\n", *y);

    }
    else{

        printf("%d et %d ont des signes different.\n\n", *x, *y);

        tmp = *x * *y;
        *x = *x + *y;
        *y = tmp;

        printf("a = %d\n", *x);
        printf("b = %d\n", *y);
    }
}


int main(){

    int a, b;
    int *p = &a;
    int *q = &b;


    // Saisie, contrôle et lecture de a
    recA:
    printf("Veuillez saisir a : \n");
    if(scanf("%d", p) != 1){

        printf("Erreur ! Veuillez entrer un nombre.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recA;// Recommence la boucle si l'entrée est invalide
    }


    // Saisie, contrôle et lecture de b
    recB:
    printf("Veuillez saisir b : \n");
    if(scanf("%d", q) != 1){

        printf("Erreur ! Veuillez entrer un nombre.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recB;// Recommence la boucle si l'entrée est invalide
    }

    // Appel de la fonction qui permet le changement de a et b (passage par réference)
    echange(p, q);




    return 0;
}
