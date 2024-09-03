#include <stdio.h>

int main() {

    int A[100], B[100];
    int N, M;
    int *PA, *PB;

    // Saisie, contrôle et lecture de la taille du tableau A choisis par l'utilisateur
    recN:
    printf("Veuillez choisir la taille du tableau A : \n");
    if(scanf("%d", &N) != 1 || N <= 1){

        printf("Erreur ! Veuillez choisir un nombre.\n");
        while(getchar() != '\n');// Vide le buffer d'entrée
        goto recN;// Recommence la boucle si la  saisie est invalide
    }


    // Saisie, contrôle et lecture du remplissage de A
    recA:
    printf("Veuillez remplir les elements du tableau A : \n");

    for(PA = A; PA < A + N; PA++){

        printf("A[%d] = ", PA - A);
        if(scanf("%d", PA) != 1 ){

            printf("Erreur ! Veuillez choisir un nombre.\n");
            while(getchar() != '\n');// Vide le buffer d'entrée
            goto recA;// Recommence la boucle si la  saisie est invalide
        }
    }



    // Saisie, contrôle et lecture de la taille du tableau B choisis par l'utilisateur
    recM:
    printf("\nVeuillez choisir la taille du tableau B : \n");
    if(scanf("%d", &M) != 1 || N <= 1){

        printf("Erreur ! Veuillez choisir un nombre.\n");
        while(getchar() != '\n');// Vide le buffer d'entrée
        goto recM;// Recommence la boucle si la  saisie est invalide
    }


    // Saisie, contrôle et lecture du remplissage de B
    recB:
    printf("Veuillez remplir les elements du tableau B : \n");

    for(PB = B; PB < B + M; PB++){

        printf("B[%d] = ", PB - B);
        if(scanf("%d", PB) != 1 ){

            printf("Erreur ! Veuillez choisir un nombre.\n");
            while(getchar() != '\n');// Vide le buffer d'entrée
            goto recB;// Recommence la boucle si la  saisie est invalide
        }
    }



    // Ajout des éléments B à la fin de A
    for(PA = A + N, PB = B; PA < A + (N + M); PA++, PB++){

        *PA = *PB;

    }


    // Affichage du tableau qui contient le tableau A et B
    printf("Apres l'ajout du tableau B a la fin du tableau A voici le nouveau tableau : \n");

    for(PA = A; PA <  A + (N + M); PA++)
        printf("A[%d] = %d\n", PA - A, *PA);


    return 0;
}
