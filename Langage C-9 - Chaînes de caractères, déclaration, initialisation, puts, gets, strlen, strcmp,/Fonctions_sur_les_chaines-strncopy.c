#include <stdio.h>
#include <string.h>


int main(){

    char c[] = "Ali";

    char d[10];

    strncpy(d, c, 2);
    //d[2] = '\0';  // Ajoute le caractère de fin de chaîne après les deux premiers caractères copiés

    puts(d);


    return 0;
}