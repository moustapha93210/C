#include <stdio.h>
#include <string.h>



int main(){

    char C[100];
    int i, n;


    // Saisie du mot par l'utilisateur
    puts("Veuillez entrer un mot :");
    gets(C);

    n = 0;

    for(i = 0; C[i] != '\0' ; i++){

            n++;

        printf("i = %d\n", i);
        printf("C[%d] = %c\n\n", i, C[i]);

    }

    printf("Taille : %d\n", n);
    printf("Taille avec la fonction 'strlen()' : %d", strlen(C) );




    return 0;
}


/*
 * Exercice fais avec des pointeurs


    char c[100];
    int i, n;
    char *p;


    // Saisie du mot par l'utilisateur
    puts("Veuillez entrer un mot :");
    gets(c);

    p = c;

    n = 0;

    for(p = c; p < c + 100; p++){

    if(*p != '\0'){
    n++;

    }

    printf("i = %d\n", p - c);
    printf("C[%d] = %c\n\n", p - c, *p);

    }

    printf("Taille : %d", n);
*/
