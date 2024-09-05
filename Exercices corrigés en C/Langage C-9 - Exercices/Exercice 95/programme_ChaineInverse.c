#include <stdio.h>
#include <string.h>

int main(){

    char M[20];
    int i, j;


    // Saisie et lecture du mot choisi par l'utilisateur
    printf("Veuillez saisir une chaine : \n");
    gets(M);

    /*
    // Affichage du mot inverse 1ère méthode
    for(i = strlen(M) - 1; i >= 0 ; i--)
        printf("%c ", M[i]);
    */


    // Affichage du mot inverse 2ème méthode
    puts(strrev(M) );




    return 0;
}
