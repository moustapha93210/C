#include <stdio.h>

int main(){


    char chaine[6] = {'H', 'e', 'l', 'l', 'o', '\0'};// Valide

    char chaine[4] = {'H', 'e', 'l', 'l', 'o', '\0'};// Invalide

    char chaine[9] = {'H', 'e', 'l', 'l', 'o', '\0'};// Valide

    char chaine[] = {'H', 'e', 'l', 'l', 'o', '\0'};// Valide

    char chaine[6] = "Hello";// Valide

    char chaine[3] = "Hello";// Invalide

    char chaine[8] = "Hello";// Valide

    char chaine[]= "Hello";// Valide

    char chaine[6];
    chaine = "Hello";// Invalide




    return 0;
}
