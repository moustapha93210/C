#include <stdio.h>
#include <string.h>

int main(){

    char T[] = "Informatique";

    printf("%s", T + 5 );

    // OU

    printf("%s", strstr(T, "matique") );


    return 0;
}