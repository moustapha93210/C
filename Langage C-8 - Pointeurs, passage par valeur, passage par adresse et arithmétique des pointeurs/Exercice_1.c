#include <stdio.h>

int main(){

    int A, B, C;
    int *P1, *P2;

    A = 1;
    B = 2;
    C = 3;

    P1 = &A;
    printf("P1 = &A;\n");
    printf("A = %d\t B = %d\t C = %d\t P1 = %p (&A)\t P2 = \n\n", A, B, C, P1);

    P2 = &C;
    printf("P2 = &C;\n");
    printf("A = %d\t B = %d\t C = %d\t P1 = &A = %p\t P2 = &C = %p \n\n", A, B, C, P1, P2);

    *P1 = (*P2)++;
    printf("*P1 = (*P2)++;\n");
    printf("A = %d\t B = %d\t C = %d\t P1 = &A = %p\t P2 = &C = %p \n\n", A, B, C, P1, P2);

    P1 = P2;
    printf("P1 = P2;\n");
    printf("A = %d\t B = %d\t C = %d\t P1 = &C = %p\t P2 = &C = %p \n\n", A, B, C, P1, P2);

    P2 = &B;
    printf("P2 = &B;\n");
    printf("A = %d\t B = %d\t C = %d\t P1 = &C = %p\t P2 = &B = %p \n\n", A, B, C, P1, P2);

    *P1 -= *P2;
    printf("*P1 -= *P2;\n");
    printf("A = %d\t B = %d\t C = %d\t P1 = &C = %p\t P2 = &B = %p \n\n", A, B, C, P1, P2);

    ++*P2;
    printf("++*P2;\n");
    printf("A = %d\t B = %d\t C = %d\t P1 = &C = %p\t P2 = &B = %p \n\n", A, B, C, P1, P2);

    *P1 *= *P2;
    printf("*P1 *= *P2;\n");
    printf("A = %d\t B = %d\t C = %d\t P1 = &C = %p\t P2 = &B = %p \n\n", A, B, C, P1, P2);

    A = ++*P2 * *P1;
    printf("A = ++*P2 * *P1;\n");
    printf("A = %d\t B = %d\t C = %d\t P1 = &C = %p\t P2 = &B = %p \n\n", A, B, C, P1, P2);

    P1 = &A;
    printf("P1 = &A;\n");
    printf("A = %d\t B = %d\t C = %d\t P1 = &A = %p\t P2 = &B = %p \n\n", A, B, C, P1, P2);

    *P2 = *P1 /= *P2;
    printf("*P2 = *P2 /= *P2;\n");
    printf("A = %d\t B = %d\t C = %d\t P1 = &A = %p\t P2 = &B = %p \n\n", A, B, C, P1, P2);

    return 0;
}
