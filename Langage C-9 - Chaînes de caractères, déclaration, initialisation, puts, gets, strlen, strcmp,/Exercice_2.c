#include <stdio.h>

int main(){

    char C1[10];
    char C2[10];
    int i;

    printf("Veuillez saisir une chaine : \n");
    gets(C1);

    for(i = 0; C1[i] != '\0'; i++)
        C2[i] = C1[i];

    C2[i] = '\0';

    printf("La premiere chaine est : %s\n", C1);
    printf("La deuxieme chaine est : %s\n", C2);
    printf("Le nombre total de caractere copies est : %d\n", i+1);


    return 0;
}