#include <stdio.h>

int main(){

    int annee_naissance, age;

    printf("Veuillez saisir votre annee de naissance : ");
    scanf("%d", &annee_naissance);

    age = 2024 - annee_naissance;

    printf("Votre age est de : %d", age);


    return 0;
}