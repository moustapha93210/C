#include <stdio.h>
#include <string.h>


int main(){

    char c[] = "Ali";

    char d[10] = "Amine ";

    strncat(d, c, 2);


    puts(d);


    return 0;
}