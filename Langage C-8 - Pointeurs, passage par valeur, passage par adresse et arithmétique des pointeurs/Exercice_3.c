#include <stdio.h>



int main(){

    int A[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    int *P;

    P = A;

    for(int i = 0; i < 9; i++)
        printf("Adresse de A[%d] = %p\n", i, &A[i]);

    printf("--------\n");

    printf("Instruction : ++P;\n");
    printf("Resultat = %p \n\n", ++P);

    printf("Instruction : *(P+3);\n");
    printf("Resultat = %d \n\n", *(P+3));

    printf("Instruction : P - &A[4];\n");
    printf("Resultat = %d \n\n", P - &A[4]);

    printf("Instruction : --P;\n");
    printf("Resultat = %p \n\n", --P);

    printf("Instruction : A+6;\n");
    printf("Resultat = %p \n\n", A+6);

    printf("Instruction : *(P + *(P+8) - A[7]);\n");
    printf("Resultat = %d \n\n", *(P + *(P+8) - A[7]) );

    printf("Instruction : P == &A[4];\n");
    printf("Resultat = %d \n\n", P == &A[4]);

    printf("Instruction : P >= A\n");
    printf("Resultat = %d \n\n", P >= A);





    return 0;
}


/*
printf("Instruction            \t|\t\tResultat\n");
printf("-------------------------------------------------------------------------\n");

++P;
printf("++P                    \t|\t  &23 OU &A[1] = %p\n", P);


printf("-------------------------------------------------------------------------\n");
*(P+3);
printf("*(P+3)                 \t|\t  %d\n", *(P+3) );


printf("-------------------------------------------------------------------------\n");
P - &A[4];
printf("P - &A[4];             \t|\t  %d\n", P - &A[4] );


printf("-------------------------------------------------------------------------\n");
--P;
printf("--P;                   \t|\t  &12 OU &A[0] = %p\n", P);


printf("-------------------------------------------------------------------------\n");
A + 6;
printf("A + 6;                 \t|\t  &78 OU &A[6] = %p\n", A + 6);


printf("-------------------------------------------------------------------------\n");
*(P + *(P+8) - A[7]);
printf("*(P + *(P+8) - A[7]); \t|\t  %d\n", *(P + *(P+8) - A[7]) );


printf("-------------------------------------------------------------------------\n");
P == &A[4];
printf("P == &A[4];           \t|\t  %d\n", P == &A[4] );


printf("-------------------------------------------------------------------------\n");
P >= A;
printf("P >= A;               \t|\t  %d\n", P >= A );

*/