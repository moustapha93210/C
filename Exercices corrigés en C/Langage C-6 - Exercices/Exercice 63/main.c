#include <stdio.h>

int main(){

    int T[100];
    int i, Taille, pos;


    // Choisir la taille du tableau
    printf("Veuillez choisir la taille de votre tableau : \n");
    scanf("%d", &Taille);


    // Remplir le tableau T[Taille]
    printf("Veuillez remplir votre tableau : \n");
    for(i = 0; i < Taille; i++){

        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);

    }


    // Choisir l'element que l'on veut supprimer
    printf("Veuillez choisir la position de l'element que vous voulez supprimer : \n");
    scanf("%d", &pos);

    if(pos <= 0 || pos > Taille){
        printf("Position invalide ! Veuillez entrer une position comprise entre 1 et %d", Taille);
    }
    else{

        // Suppression de l'élément à la position choisie
        for(i = pos; i <= Taille - 1; i++){

            T[i - 1] = T[i];// Décaler les éléments à gauche

        }

        Taille--;// Réduire la taille du tableau

        // Affichage du tableau après suppression
        printf("Les elements du tableau apres la suppression sont : \n");
        for(i = 0; i < Taille; i++){

            printf("%d\t", T[i]);

        }


    }






    return 0;
}
