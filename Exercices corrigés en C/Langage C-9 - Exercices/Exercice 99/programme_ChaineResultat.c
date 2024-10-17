#include <stdio.h>

int main(){

    char *C1 = "Quiz";
    char C2[10] = "Quiz";

    printf("%d\n", sizeof(C1) ); // 4 octets
    printf("%d", sizeof(C2) ); // 10 octets


    return 0;
}