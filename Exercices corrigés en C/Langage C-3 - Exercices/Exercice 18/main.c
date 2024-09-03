#include <stdio.h>
#include <stdbool.h>

int main() {

    int age;
    char sexe;
    bool C1, C2;

    debut:
    printf("Veuillez entrer votre sexe : \n");
    scanf("%c", &sexe);

    printf("Veuillez entrer votre age : \n");
    scanf(" %d", &age);

    /* Méthode 1
    if ( ( sexe == 'H' && age >= 20 ) || ( sexe == 'F' && age >= 18 && age <= 35 ) )
        printf("L'habitant est imposable");
    else
        printf("L'habitant est non imposable");*/

    // Méthode 2
    C1 = sexe == 'H' && age >= 20;
    C2 = sexe == 'F' && age >= 18 && age <= 35;

    if(C1 || C2)
        printf("L'habitant est imposable");
    else
        printf("L'habitant est non imposable");

    return 0;
}
