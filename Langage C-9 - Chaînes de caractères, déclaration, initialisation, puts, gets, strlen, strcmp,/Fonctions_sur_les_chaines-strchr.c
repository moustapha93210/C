#include <stdio.h>
#include <string.h>


int main(){

    char a[] = "Hello World";

    printf("%s\n", strchr(a, 'W') );

    char *b = strchr(a, 'o');

    printf("%s\n", b);






    return 0;
}