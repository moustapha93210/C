#include <stdio.h>
#include <string.h>


int main(){

    char a[] = "Ali";

    char b[] = "Ali";

    char c[] = "ali";

    char d[] = "Amine";

    printf("%d\n", strcmp(a, b) );

    printf("%d\n", strcmp(a, c) );

    printf("%d\n", strcmp(d, a) );


    return 0;
}