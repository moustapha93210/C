#include <stdio.h>

int main(){

    int T[100];
    int i, Taille, pos;


    // Choisir la taille du tableau
    recTaille:
    printf("Veuillez choisir la taille de votre tableau : \n");
    if( scanf("%d", &Taille) != 1 || Taille < 0){
        printf("Erreur ! Veuillez entrer un nombre entier positif.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recTaille;// Recommence la boucle si la saisie est invalide
    }


    // Remplir le tableau T[Taille]
    printf("Veuillez remplir votre tableau : \n");
    for(i = 0; i < Taille; i++){

        recTab:
        printf("T[%d] = ", i);
        if( scanf("%d", &T[i]) != 1){
            printf("Erreur ! Veuillez entrer un nombre.\n");
            while(getchar() != '\n');// Vider le buffer d'entrée
            goto recTab;// Recommence la boucle si la saisie est invalide
        }

    }


    // Choisir l'element que l'on veut supprimer
    recPosition:
    printf("Veuillez choisir la position de l'element que vous voulez supprimer : \n");
    if( scanf("%d", &pos) != 1 || pos < 0 || pos > Taille){
        printf("Erreur ! Veuillez entrer un nombre compris entre 0 et %d.\n", Taille);
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recPosition;// Recommence la boucle si la saisie est invalide
    }


    // Suppression de l'élément à la position choisie
    for(i = pos; i <= Taille - 1; i++){

        T[i] = T[i + 1];// Décaler les éléments à gauche

        printf("T[%d] = %d\n", i, T[i]);

    }

    Taille--;// Réduire la taille du tableau

    // Affichage du tableau après suppression
    printf("Les elements du tableau apres la suppression sont : \n");
    for(i = 0; i < Taille; i++){

        printf("T[%d] = %d\n", i, T[i]);

    }









    return 0;
}
