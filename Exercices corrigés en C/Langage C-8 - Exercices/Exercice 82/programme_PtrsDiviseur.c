#include <stdio.h>



int main(){

    int n;
    int *p = &n;
    int i;

    recEntier:
    printf("Veuillez saisir un nombre entier : \n");
    if( scanf("%d", p) != 1 || *p <= 0){

        printf("Erreur ! Veuillez entrer un nombre.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recEntier;// Recommence la boucle si l'entrée est invalide
    }

    for(i = 1; i <= *p; i++){

        if(*p % i == 0)
            printf("%d\t", i);

    }






    return 0;
}
