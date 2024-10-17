#include <stdio.h>
#include <string.h>

int main() {

    char A[100], B[100];
    char *PA = A;

    char *PB = B;

    // Saisie et lecture de A
    printf("Entrer la premiere chaine : ");
    gets(A);



    // Saisie et lecture de B
    printf("Entrer la deuxieme chaine : ");
    gets(B);


    PA = PA + strlen(A);

    while(*PB != '\0'){

        *PA = *PB;
        PA++;
        PB++;

    }

    *PA = '\0';

    printf("La chaine concatenee est : %s", A);



    return 0;
}
