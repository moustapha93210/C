#include <stdio.h>

int main(){

    int taille, i, N, P;

    recTaille:
    printf("Veuillez selectionner la taille de votre tableau : \n");
    if( scanf("%d", &taille) != 1 || taille < 0){
        printf("Erreur ! Veuillez entrer un nombre.\n");
        while(getchar() != '\n');
        goto recTaille;
    }

    int T[taille];

    for(i = 0; i < taille; i++){

        recT:
        printf("T[%d] = ", i);
        if( scanf("%d", &T[i]) != 1 ){
            printf("Erreur ! Veuillez entrer un nombre.\n");
            while(getchar() != '\n');
            goto recT;
        }

    }

    recN:
    printf("Entrer la valeur de l'element que vous voulez inserer dans le tableau : \n");
    if( scanf("%d", &N) != 1 ){
        printf("Erreur ! Veuillez entrer un nombre.\n");
        while(getchar() != '\n');
        goto recN;
    }

    recPosition:
    printf("Entrer la position de l'element que vous voulez inserer dans le tableau : \n");
    if( scanf("%d", &P) != 1 || P < 0 || P > taille){
        printf("Erreur ! Veuillez entrer un nombre compris entre 0 et %d.\n", taille);
        while(getchar() != '\n');
        goto recPosition;
    }

    if(P >= 0 && P <= taille){

        for(i = taille; i >= P; i--){

            T[i] = T[i - 1];

            printf("T[%d] = %d\n", i, T[i]);

        }

        T[P] = N;
        taille++;

        printf("Les elements de tableau apres insertion sont : \n");

        for(i = 0; i < taille; i++){

            printf("T[%d] = %d\n", i, T[i]);

        }

    }










    return 0;
}
