#include <stdio.h>
#include <string.h>

int main(){

    char M1[100];
    char M2[100];
    int i, j, n;

    // Saisie de M1
    printf("Veuillez saisir votre premier mots : \n");
    gets(M1);

    // Saisie de M2
    printf("Veuillez saisir votre deuxieme mot : \n");
    gets(M2);

    n = 0;

    // Gestions des erreurs
    if( strlen(M1) != strlen(M2) )
        printf("Erreur ! Il faut que les 2 mots soient de la meme taille.\n");
    else{

        // Parcours du tableau pour savoir la distance de Hammin entre M1 et M2
        for(i = 0; i < strlen(M1); i++){

            if(M1[i] != M2[i])
                n++;

        }

        printf("La distance de Hammin entre M1 et M2 est de : %d\n", n);
    }




    return 0;
}
