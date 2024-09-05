#include <stdio.h>
#include <string.h>

int main(){

    char T[20];
    int Frq[20];
    int max;
    int i, j, compteur;

    // Saisi et lecture de la chaine de caractère
    puts("Veuillez saisir une chaine :");
    gets(T);


    // On attribue au tableau Frq -1 à toutes ses cases
    for(i = 0; i < 20; i++)
        Frq[i] = -1;



    // Boucle pour connaitre quel caractère du tableau T à le plus de fréquence
    for(i = 0; i < strlen(T); i++){

        compteur = 1;

        for(j = i + 1; j < strlen(T); j++){

            if(T[i] == T[j]){

                compteur++;
                Frq[j] = 0;

            }
        }

        if(Frq[i] != 0)
            Frq[i] = compteur;
    }



    // Affichage du caractère qui s'affiche le plus
    max = 0;

    for(i = 0; i < strlen(T); i++){

        if( Frq[i] > Frq[max] )
            max = i;
    }

    printf("\nLe caractere qui se repete le plus est '%c' = %d", T[max], Frq[max]);




    return 0;
}
