#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int nombreAleatoire = 0;
    int nombreTentatives = 0;
    int nombreEntre;
    int estCorrect = 0;

    const int MAX = 30, MIN = 1;

    srand(time(NULL));

    nombreAleatoire = (rand() % (MAX - MIN + 1)) + MIN;

    printf("L'ordinateur a choisi un nombre entre 1 et 30. A vous de jouer.\n");


    do {
        nombreTentatives ++;

        printf("Quel est ce nombre  ? : \n");
        scanf("%d", &nombreEntre);

        if(nombreAleatoire > nombreEntre)
            printf("C'est plus !\n");
        else if(nombreAleatoire < nombreEntre)
            printf("C'est moins !\n");
        else {
            estCorrect = 1;
            break;
        }

    }while(nombreTentatives < 5);

    if(estCorrect == 1)
        printf("Bravo ! vous avez trouve %d en %d essais", nombreAleatoire, nombreTentatives);
    else
        printf("Oups ! vous avez depasse les 5 tentatives autorisees.");



    return 0;
}
