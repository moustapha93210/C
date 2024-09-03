#include <stdio.h>

int main() {

    float prixHT, prixTTC;
    char categorie;

    debut:
    printf("Veuillez entrer le prix hors taxe de votre produit : \n");
    scanf("%f", &prixHT);

    printf("Veuillez entrer la categorie de TVA de votre produit : \n");
    scanf(" %c", &categorie);

    if(prixHT > 0 && (categorie == 'a' || categorie == 'A' || categorie == 'b' || categorie == 'B' || categorie == 'c' || categorie == 'C') ){

        switch(categorie){
            case 'a':
            case 'A':
                prixTTC = prixHT * 1.07;

                printf("Prix HT : %.2f euros\n", prixHT);
                printf("Categorie : %c\n", categorie);
                printf("Prix TTC : %.2f euros\n", prixTTC);
                break;
            case 'b':
            case 'B':
                prixTTC = prixHT * 1.20;

                printf("Prix HT : %.2f euros\n", prixHT);
                printf("Categorie : %c\n", categorie);
                printf("Prix TTC : %.2f euros\n", prixTTC);
                break;
            case 'c':
            case 'C':
                prixTTC = prixHT * 1.25;

                printf("Prix HT : %.2f euros\n", prixHT);
                printf("Categorie : %c\n", categorie);
                printf("Prix TTC : %.2f euros\n", prixTTC);
                break;
            default:
                printf("Erreur !\n\n");
        }

    }
    else{
        printf("Vous devez rentrer un prix correct !\n");
        printf("Vous devez rentrer une categorie qui correspond a 'A' ou 'B' ou 'C' !\n\n");

        goto debut;
    }


    return 0;
}
