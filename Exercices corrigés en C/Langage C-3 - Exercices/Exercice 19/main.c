#include <stdio.h>

int main() {

    float PHT;
    char cat;

    printf("Veuillez entrer le prix hors taxe de votre produit : \n");
    scanf("%f", &PHT);

    printf("Veuillez entrer la categorie de TVA de votre produit : \n");
    scanf(" %c", &cat);

    switch(cat){
        case 'A':
            printf("Le prix TTC de produit est : %.2f euros\n", PHT + PHT * 0.07);
            break;
        case 'B':
            printf("Le prix TTC de produit est : %.2f euros\n", PHT + PHT * 0.20);
            break;
        case 'C':
            printf("Le prix TTC de produit est : %.2f euros\n", PHT + PHT * 0.25);
            break;
        default:
            printf("La categorie n'existe pas !");
            break;
    }


    return 0;
}
