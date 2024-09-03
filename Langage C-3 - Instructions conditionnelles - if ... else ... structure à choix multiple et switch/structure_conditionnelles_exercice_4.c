#include <stdio.h>

int main()
{
    int nb;

    printf("Veuillez saisir un nombre entre 1 et 7 : ");
    scanf("%d", &nb);

    switch(nb)
    {
        case 1 :
            printf("Lundi");
            break;
        case 2:
            printf("Mardi");
            break;
        case 3:
            printf("Mercredi");
            break;
        case 4:
            printf("Jeudi");
            break;
        case 5:
            printf("Vendredi");
            break;
        case 6:
            printf("Samedi");
            break;
        case 7:
            printf("Dimanche");
            break;
        default:
            printf("Le nombre saisie est incorrect !");
            break;

    }

    return 0;
}
//
// Created by chaib on 16/04/2024.
//
