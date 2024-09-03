#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int nombreAleatoire = 0, nbTentatives, i, nbChoisis;
    const int MAX = 30, MIN = 1;

    srand(time(NULL));

    nombreAleatoire = (rand() % (MAX - MIN + 1)) + MIN;

    printf("Bonjour, Je suis l'ordinateur qui jouera avec vous.\n");
    printf("J'ai choisis un nombre entre 1 et 30, essayez de le trouver, vous avez 5 tentatives.\n\n");

    nbTentatives = 5;
    i = 5;

    do {

        debut:
        printf("Quel nombre choisissez-vous ? : \n");
        scanf("%d", &nbChoisis);

        if( ( nbChoisis > nombreAleatoire ) && ( nbChoisis >= 1 && nbChoisis <= 30 ) ){
            printf("Plus petit !\n");
            i = i - 1;
            printf("Il vous reste %d tentatives\n\n",i);

        }
        else if( ( nbChoisis < nombreAleatoire ) && ( nbChoisis >= 1 && nbChoisis <= 30 )){
            printf("Plus grand !\n");
            i = i - 1;
            printf("Il vous reste %d tentatives\n\n",i);
        }
        else{
            break;
        }


    }while(i > 0 && ( nbChoisis >= 1 && nbChoisis <= 30 ) );

    if(i > 0 && ( nbChoisis >= 1 && nbChoisis <= 30 ))
        printf("Bravo ! vous avez trouve le nombre qui etait %d", nombreAleatoire);
    else if(i == 0 && ( nbChoisis >= 1 && nbChoisis <= 30 ))
        printf("Vous avez perdu, le nombre qu'il fallais deviner etait %d", nombreAleatoire);
    else{
        printf("Erreur, Veuillez choisir un nombre entre 1 et 30 !\n\n");
        goto debut;
    }



    return 0;
}
