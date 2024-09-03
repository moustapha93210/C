#include <stdio.h>

int main(){

    int annee, age;

    printf("Veuillez saisir votre annee de naissance : ");
    scanf("%d", &annee);

    age = 2024 - annee;

    printf("Votre age est de : %d", age);


    return 0;
}