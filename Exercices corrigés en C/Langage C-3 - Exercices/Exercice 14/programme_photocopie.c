#include <stdio.h>

int main() {

    int nb;
    float facture, prix, prixFinal;

    printf("Veuillez donner le nombre de photocopie que vous souhaitez faire : ");
    scanf("%d", &nb);

    prix = 0;
    prixFinal = 0;

    if(nb <= 10){
        prix = nb * 0.30;
    }
    else if(nb > 10 && nb <= 30){
        prix = 10 * 0.30 + (nb - 10) * 0.25;
    }
    else if(nb > 30){
        prix = 10 * 0.30 + 20 * 0.25 + (nb - 30) * 0.20;
    }

    facture = prix;

    printf("Votre est facture est de : %.2f Euros", facture);




    return 0;
}
