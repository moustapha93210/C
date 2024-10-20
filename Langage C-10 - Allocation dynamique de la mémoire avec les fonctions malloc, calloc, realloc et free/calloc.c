#include <stdio.h>
#include <stdlib.h>

int main() {

    int *x = malloc(3 * sizeof(int) );

    printf("%d\n", *(x + 0) );
    printf("%d\n", *(x + 1) );
    printf("%d\n", *(x + 2) );

    *(x + 0) = 1;
    *(x + 1) = 3;
    *(x + 2) = 3;

    printf("%d\n", *(x + 0) );
    printf("%d\n", *(x + 1) );
    printf("%d\n\n", *(x + 2) );

    int *y = calloc(3, sizeof(int) );

    printf("%d\n", *(y + 0) );
    printf("%d\n", *(y + 1) );
    printf("%d\n", *(y + 2) );

    *(y + 0) = 1;
    *(y + 1) = 3;
    *(y + 2) = 3;

    printf("%d\n", *(y + 0) );
    printf("%d\n", *(y + 1) );
    printf("%d\n\n", *(y + 2) );


    return 0;
}
