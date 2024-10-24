#include <stdio.h>
#include <stdlib.h>


int main(){

    int n, i, nbNvElem;
    float moy, S;
    char rep;



    // Saisie et lecture de la taille du tableau
    recn:
    printf("Veuillez saisir la taille du tableau : ");
    if(scanf("%d", &n) != 1 || n <= 0){

        printf("Erreur ! Veuillez choisir un nombre positif et superieur a zero.\n");
        while(getchar() != '\n');// Vide le buffer d'entrée
        goto recn;// Recommence la boucle si la  saisie est invalide

    }

    // Allocation dynamique du tableau
    float *T = calloc(n, sizeof(float));

    if(T == NULL){

        printf("Erreur d'allocation de memoire.\n");
        exit(0);

    }


    // Saisie et lecture des éléments du tableau
    for(i = 0; i < n; i++){

        recTab:
        printf("T[%d] = ", i);
        if(scanf("%f", T+i) != 1){

            printf("Erreur ! Veuillez choisir un nombre.\n");
            while(getchar() != '\n');// Vide le buffer d'entrée
            free(T+i);
            goto recTab;// Recommence la boucle si la  saisie est invalide

        }

    }



    // Calcule de la moyenne
    S = 0;

    for(i = 0; i < n; i++)
        S = S + *(T+i);

    moy = S / n;


    // Affichage de la moyenne
    printf("La moyenne des elements du tableau est : %.2f\n\n", moy);


    // Demande d'ajout, saisie et lecture des autres éléments
    recrep:
    printf("Voulez-vous ajouter d'autres elements (O/N) ? : \n");
    scanf(" %c", &rep);
    if(rep != 'o' && rep != 'O' && rep != 'n' && rep != 'N'){

        printf("Erreur ! Veuillez entrer 'O' ou 'N'.\n");
        while(getchar() != '\n');// Vide le buffer d'entrée
        goto recrep;// Recommence la boucle si la  saisie est invalide

    }


    // Faire ce programme tant que la réponse est 'o' ou 'O'
    while(rep == 'o' || rep == 'O'){

        // Saisie et lecture du nombre d'éléments à ajouter
        recnbNvElem:
        printf("Veuillez entrer le nombre d'elements a ajouter : ");
        if(scanf("%d", &nbNvElem) != 1 || nbNvElem <= 0){

            printf("Erreur ! Veuillez choisir un nombre positif et superieur a zero.\n");
            while(getchar() != '\n');// Vide le buffer d'entrée
            goto recnbNvElem;// Recommence la boucle si la  saisie est invalide

        }

        // Affectation de la nouvelle taille du tableau
        n = n + nbNvElem;


        // Affichage des éléments du tableau avant l'ajout des nouveaux éléments
        for(i = 0; i < (n - nbNvElem); i++)
            printf("T[%d] = %.2f\n", i, *(T+i) );


        // Allocation dynamique de la nouvelle taille du tableau
        T = realloc(T, n * sizeof(float) );


        // Saisie et lecture des nouveaux éléments du tableau
        printf("Veuillez saisir les nouveaux elements du tableau : \n");

        for(i = (n - nbNvElem); i < n; i++){

            recTab2:
            printf("T[%d] = ", i);
            if(scanf("%f", T+i) != 1){

                printf("Erreur ! Veuillez choisir un nombre.\n");
                while(getchar() != '\n');// Vide le buffer d'entrée
                free(T+i);
                goto recTab2;// Recommence la boucle si la  saisie est invalide

            }

        }



        // Calcule de la nouvelle moyenne

        for(i = (n - nbNvElem); i < n; i++)
            S = S + *(T+i);

        moy = S / n;


        // Affichage de la nouvelle moyenne
        printf("La moyenne des elements du tableau est : %.2f\n", moy);


        // Demande d'ajout, saisie et lecture des autres éléments
        recrep2:
        printf("Voulez-vous ajouter d'autres elements (O/N) ? : \n");
        scanf(" %c", &rep);
        if(rep != 'o' && rep != 'O' && rep != 'n' && rep != 'N'){

            printf("Erreur ! Veuillez entrer 'O' ou 'N'.\n");
            while(getchar() != '\n');// Vide le buffer d'entrée
            goto recrep2;// Recommence la boucle si la  saisie est invalide

        }

    }


    // Libération de la mémoire
    free(T);

    return 0;
}
