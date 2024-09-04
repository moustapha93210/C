#include <stdio.h>

int main(){

    char c[10];
    int i;

    /*
     * Manière 1 ( Classique )
    printf("Veuillez saisir une chaine : \n");

    for(i = 0; i < 10; i++)
        scanf(" %c", &c[i]);

    for(i = 0; i < 10; i++)
        scanf(" %c", &c[i]);
    */


    /*
     * Méthode 2 ( ne prend pas en charge les espaces )
    printf("Veuillez saisir une chaine : \n");
    scanf("%s", c);

    printf("%s", c);
    */
    

    // Méthode 3
    printf("Veuillez saisir une chaine : \n");
    gets(c);

    puts(c);




    return 0;
}
