#include <stdio.h>
#include <string.h>

int main(){

    char mot[100];
    int Frq[100];
    int max;
    int i, j, cmptr;

    // Saisi et lecture de la chaine de caractère
    puts("Veuillez saisir une chaine de caractere :");
    gets(mot);

    int length = strlen(mot);

    // On attribue au tableau Frq -1 à toutes ses cases
    for(i = 0; i < length; i++){

        Frq[i] = -1;

        printf("Frq[%d] = -1\n", i);

    }


    // Boucle pour connaitre quel caractère du tableau mot à le plus de fréquence
    for(i = 0; mot[i] != '\0'; i++){

        cmptr = 1;

        for(j = i + 1; j < mot[j] != '\0'; j++){

            if(mot[i] == mot[j]){

                cmptr++;
                Frq[j] = 0;

            }

        }

        if(Frq[i] != 0)
            Frq[i] = cmptr;

    }


    // Affichage du tableau Frq
    printf("\nFrq apres le tri\n");

    for(i = 0; i < strlen(mot); i++)
        printf("Frq[%d] = %d = %c\n", i, Frq[i], mot[i] );


    // Affichage du caractère qui s'affiche le plus
    max = 0;

    for(i = 0; i < strlen(mot); i++){

        if( Frq[i] > Frq[max] )
            max = i;
    }

    printf("\nLe caractere qui se repete le plus est '%c'", mot[max]);




    return 0;
}
