#include <stdio.h>

int main(){

    int T[100], P[100], I[100];
    int Taille, i, Icmp, Pcmp;


    // Saisie de la taille du tableau T
    printf("Veuillez saisir la taille du tableau : \n");
    scanf("%d", &Taille);


    // Remplissage du tableau T
    printf("Veuillez saisir les elements du tableau : \n");

    for(i = 0; i < Taille; i++){

        printf("T[%d] = ", i+1);
        scanf("%d", &T[i]);
    }

    // Mettre les éléments pair dans le tableau P et les éléments impairs dans I
    Pcmp = 0;
    Icmp = 0;

    for(i = 0; i < Taille; i++){

        // Pair
        if(T[i] % 2 == 0){

            P[Pcmp] = T[i];
            Pcmp++;

        }
        // Impair
        else {

            I[Icmp] = T[i];
            Icmp++;

        }

    }

    // Affichage des éléments pair du tableau T
    printf("Les elements pairs du tableau sont : \n");

    for(i = 0; i < Pcmp; i++)
        printf("%d ", P[i]);


    // Affichage des éléments impair du tableau T
    printf("Les elements impairs du tableau sont : \n");

    for(i = 0; i < Icmp; i++)
        printf("%d ", I[i]);


    return 0;
}
