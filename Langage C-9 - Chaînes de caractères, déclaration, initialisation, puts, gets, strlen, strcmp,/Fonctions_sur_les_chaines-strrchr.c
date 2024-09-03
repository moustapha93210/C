#include <stdio.h>
#include <string.h>


int main(){

    char a[] = "Hello World";

    printf("%s\n", strrchr(a, 'l') );

    char *b = strrchr(a, 'o');

    printf("%s\n", b);






    return 0;
}