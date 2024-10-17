#include <stdio.h>

int main() {

    char T[] = "Informatique";

    printf("%s", T + 5 );



    char *C1 = "Quiz";
    char C2[10] = "Quiz";

    printf("%d\n", sizeof(C1) ); // 4 octets
    printf("%d", sizeof(C2) ); // 10 octets


    return 0;
}