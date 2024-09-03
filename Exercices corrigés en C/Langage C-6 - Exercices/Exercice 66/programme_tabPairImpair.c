#include <stdio.h>

int main(){

    int T[10], tabImpair[10], tabPair[10];
    int i, Taille, Icmp, Pcmp;


    // Saisie de la taille du tableau T
    recTaille:
    printf("Veuillez saisir la taille de votre tableau : \n");
    if( scanf("%d", &Taille) != 1 || Taille < 0) {
        printf("Erreur ! Veuillez entrer un nombre superieur a 0.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recTaille;// Recommence la boucle si la saisie est invalide
    }


    // Remplissage du tableau T
    printf("Veuillez saisir les elements du tableau T : \n");

    for(i = 0; i < Taille; i++){

        recTab:
        printf("T[%d] = ", i);
        if( scanf("%d", &T[i]) != 1 ) {
            printf("Erreur ! Veuillez entrer un nombre.\n");
            while (getchar() != '\n');// Vider le buffer d'entrée
            goto recTab;// Recommence la boucle si la saisie est invalide
        }
    }

    printf("\n");

    Pcmp = 0;
    Icmp = 0;

    for(i = 0; i < Taille; i++){

        T[i];

        // Pair
        if(T[i] % 2 == 0){

            tabPair[Pcmp] = T[i];
            Pcmp++;

        }
        // Impair
        else {

            tabImpair[Icmp] = T[i];
            Icmp++;

        }

    }

    printf("Les elements du tableau pair sont : \n");

    for(i = 0; i < Pcmp; i++){

        printf("P[%d] = %d\n", i, tabPair[i]);

    }

    printf("Les elements du tableau impair sont : \n");

    for(i = 0; i < Icmp; i++){

        printf("I[%d] = %d\n", i, tabImpair[i]);

    }


    return 0;
}
