#include <stdio.h>

int main() {

    int age;

    printf("Veuillez entrez l'age de votre enfant : ");
    scanf("%d", &age);

    switch(age) {
        case 6:
        case 7:
            printf("Poussin\n");
            break;
        case 8:
        case 9:
            printf("Pupille\n");
            break;
        case 10:
        case 11:
            printf("Minime\n");
            break;
        case 12:
            printf("Cadet\n");
            break;
        default:
            if(age < 6 || age > 12){
                printf("Votre enfant ne peut pas etre classe.\n");
            }
            break;
    }


    return 0;
}
