#include <stdio.h>
#include <stdlib.h>

int main() {

    int *y = calloc(3, sizeof(int) );

    if(y == NULL){

        printf("La memoire n'est pas alloue.\n");
        exit(0);

    }
    else {

        printf("%d\n", *(y + 0));
        printf("%d\n", *(y + 1));
        printf("%d\n\n", *(y + 2));

        *(y + 0) = 1;
        *(y + 1) = 3;
        *(y + 2) = -9;

        printf("%d\n", *(y + 0));
        printf("%d\n", *(y + 1));
        printf("%d\n\n", *(y + 2));

    }



    return 0;
}
