#include <stdio.h>
#include <string.h>



int main(){

    char mot[20];

    // Saisie du mot par l'utilisateur
    puts("Veuillez entrer un mot :");
    gets(mot);

    int i, n;

    n = 0;

    for(i = 0; mot[i] != '\0' ; i++)
        n++;


    printf("La taille de la chaine est : %d\n", n);
    printf("La taille de la chaine est : %d", strlen(mot) );




    return 0;
}
