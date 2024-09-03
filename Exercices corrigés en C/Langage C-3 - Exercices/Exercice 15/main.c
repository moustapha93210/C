#include <stdio.h>

int main() {

    int age;

    printf("Veuillez saisir l'age de votre enfant : ");
    scanf("%d", &age);

    if(age >= 6 && age <= 7)
        printf("La categorie de l'enfant est Poussin");
    else if(age >= 8 && age <= 9)
        printf("La categorie de l'enfant est Pupille");
    else if(age >= 10 && age <= 11)
        printf("La categorie de l'enfant est Minime");
    else if(age >= 12 && age <= 15)
        printf("La categorie de l'enfant est Cadet");
    else
        printf("La categorie de l'enfant n'existe pas");


    return 0;
}
