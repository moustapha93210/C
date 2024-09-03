#include <stdio.h>



float T[10];


// Fonction qui permet de saisir, contrôler et lire T
void remplirT(){

    int i;

    printf("Veuillez saisir les elements du tableau : \n");

    for(i = 0; i < 10; i++){

        printf("T[%d] = ", i+1);
        scanf("%f", &T[i]);

    }
}



// Fonction qui permet d'afficher un tableau
void afficherT(){

    int i;

    for(i = 0; i < 10; i++)
        printf("%.2f  ", T[i]);
}



// Fonction qui trie un tableau dans l'ordre croissant
void trieCT(){

    int i, j;
    float Tmp;

    for(i = 0; i < 10; i++){

        for(j = i+1; j < 10; j++){

            if(T[i] > T[j]){

                Tmp = T[i];
                T[i] = T[j];
                T[j] = Tmp;

            }
        }
    }

    printf("\nLes elements du tableau par ordre croissant : \n");
    afficherT();
}



// Fonction qui trie un tableau dans l'ordre décroissant
void trieDT(){

    int i, j;
    float Tmp;


    for(i = 0; i < 10; i++){

        for(j = i+1; j < 10; j++){

            if(T[i] < T[j]){

                Tmp = T[i];
                T[i] = T[j];
                T[j] = Tmp;
            }
        }
    }

    printf("\nLes elements du tableau par ordre decroissant : \n");
    afficherT();
}



int main(){

    remplirT();
    trieCT();
    trieDT();



    return 0;
}
