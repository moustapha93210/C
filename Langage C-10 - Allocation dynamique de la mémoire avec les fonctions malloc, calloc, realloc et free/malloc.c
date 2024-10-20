#include <stdio.h>
#include <stdlib.h>

int main() {

    char *P1, *P2, *P3;

    P1 = malloc(100);
    printf("Allocation de 100 octets en %p\n", P1);

    P2 = malloc(50);
    printf("Allocation de 50 octets en %p\n", P2);

    free(P1);
    printf("Liberation de 100 octets en %p\n", P1);

    P3 = malloc(40);
    printf("Allocation de 50 octets en %p\n", P3);


    return 0;
}
