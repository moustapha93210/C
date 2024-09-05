#include <stdio.h>
#include <string.h>

int main(){

    char M[20];
    int i, j;


    // Saisie et lecture du mot choisi par l'utilisateur
    printf("Veuillez saisir la chaine : \n");
    gets(M);

    //for(i = strlen(M) - 1; i >= 0 ; i--)
        //printf("%c ", M[i]);

    puts(strrev(M) );




    return 0;
}
