#include <stdio.h>

int main() {

    int nb;

    printf("Veuillez saisir un nombre : \n");
    scanf("%d", &nb);

    switch(nb){
        case 6:
            printf("Le personnage va a droite\n");
            break;
        case 4:
            printf("Le personnage va a gauche\n");
            break;
        case 8:
            printf("Le personnage va en haut\n");
            break;
        case 2:
            printf("Le personnage va en bas\n");
            break;
        default:
            printf("erreur de saisie, Le personnage ne bouge pas\n");
            break;
    }



    return 0;
}
