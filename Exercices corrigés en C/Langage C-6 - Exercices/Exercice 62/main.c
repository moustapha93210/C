#include <stdio.h>

int main(){

    int T[100];
    int i, Taille, pos, N;

    recTaille:
    printf("Veuillez selectionner la taille de votre tableau : \n");
    scanf("%d", &Taille);


    printf("Veuillez saisir les elements du tableau : \n");
    for(i = 0; i < Taille; i++){


        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);

    }


    printf("Entrer la valeur de l'element que vous voulez inserer dans le tableau : \n");
    scanf("%d", &N);


    printf("Entrer la position de l'element que vous voulez inserer dans le tableau : \n");
    scanf("%d", &pos);

    if(pos <= 0 || pos > Taille + 1)
        printf("Position invalide ! Veuillez saisir une position entre 1 et %d", Taille);
    else{

        for(i = Taille; i >= pos; i--){

            T[i] = T[i - 1];

            printf("T[%d] = %d\n", i, T[i]);

        }


        T[pos - 1] = N;
        Taille++;


        printf("Les elements de tableau apres insertion sont : \n");

        for(i = 0; i < Taille; i++){

            printf("T[%d] = %d\n", i + 1, T[i]);

        }

    }


    return 0;
}
