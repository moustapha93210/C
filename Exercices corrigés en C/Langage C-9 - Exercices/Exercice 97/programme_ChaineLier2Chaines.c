#include <stdio.h>
#include <string.h>

int main() {

    char A[20];
    char B[20];
    int TailleA;
    char *PA;
    PA = A;

    char *PB;
    PB = B;

    // Saisie et lecture de A
    printf("Veuillez saisir une chaine A : ");
    gets(A);

    TailleA = strlen(A);

    // Saisie et lecture de B
    printf("Veuillez saisir une chaine B : ");
    gets(B);



    PA = PA + TailleA;


    while(*PB != '\0'){

        *PA = *PB;

        PA++;
        PB++;

    }

    *PA = '\0';

    printf("%s", A);




    return 0;
}
