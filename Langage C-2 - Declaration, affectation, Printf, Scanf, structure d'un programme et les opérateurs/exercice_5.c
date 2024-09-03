#include <stdio.h>

int main()
{
    int quantiteProduitVendu;
    float pv, chiffreAffaire;

    printf(" \t Exercice 5 - Calculer le chiffre d'affaire d'une entreprise \n");

    printf("Veuillez donner la quantité de produits vendus : ");
    scanf("%d", &quantiteProduitVendu);

    printf("Veuillez donner le prix de vente :   ");
    scanf("%f", &pv);

    chiffreAffaire = quantiteProduitVendu * pv;

    printf("Le chiffre d'affaire de votre entreprise est de : %.2f", chiffreAffaire);

    return 0;
}