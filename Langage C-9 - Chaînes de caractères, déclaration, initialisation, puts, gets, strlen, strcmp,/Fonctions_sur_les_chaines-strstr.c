#include <stdio.h>
#include <string.h>


int main(){

    char a[] = "Hello World";

    //printf("%s\n", strstr(a, "lo") );

    char *b = strstr(a, "Wo");

    printf("%s\n", b);




    return 0;
}