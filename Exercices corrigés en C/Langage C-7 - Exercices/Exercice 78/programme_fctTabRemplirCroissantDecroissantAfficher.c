#include <stdio.h>

// Fonction qui permet de saisir, contrôler et lire T
void remplir(int T[]){

    int i;

    printf("Veuillez saisir les elements du tableau : \n");

    for(i = 0; i < 10; i++){

        recTab:
        printf("T[%d] = ", i);
        if( scanf("%d", &T[i]) != 1 ){

            printf("Erreur ! Veuillez saisir un nombre.\n");
            while(getchar() != '\n');// Vider le buffer d'entrée
            goto recTab;// Recommence la boucle si la saisie est invalide
        }
    }

}


// Fonction qui trie un tableau dans l'ordre croissant
void trieCroissant(int T[]){

    int i, j, Tmp;

    Tmp = T[0];

    for(i = 0; i < 10; i++){

        for(j = i+1; j < 10; j++){

            if(T[i] > T[j]){

                Tmp = T[i];
                T[i] = T[j];
                T[j] = Tmp;

            }
        }
    }

    printf("Les elements du tableau trier dans l'ordre croissant sont : \n");

    for(i = 0; i < 10; i++)
        printf("CT[%d] = %d\n", i, T[i]);

}



// Fonction qui trie un tableau dans l'ordre décroissant
void trieDecroissant(int T[]){

    int i, j, Tmp;

    Tmp = T[0];

    for(i = 0; i < 10; i++){

        for(j = i+1; j < 10; j++){

            if(T[i] < T[j]){

                Tmp = T[i];
                T[i] = T[j];
                T[j] = Tmp;
            }
        }


    }

    printf("\nLes elements du tableau trier dans l'ordre decroissant sont : \n");

    for(i = 0; i < 10; i++)
        printf("DT[%d] = %d\n", i, T[i]);

}



// Fonction qui permet d'afficher un tableau
void afficher(int T[]){

    int i;

    printf("\nLes elements du tableau sont : \n");

    for(i = 0; i < 10; i++)
        printf("T[%d] = [%d]", i, T[i]);

}



int main(){

    int T[10];

    remplir(T);
    trieCroissant(T);
    trieDecroissant(T);





    return 0;
}
