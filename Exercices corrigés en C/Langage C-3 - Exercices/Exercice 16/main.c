#include <stdio.h>

int main() {

    float N1, N2, N3, M;

    debut:
    printf("Veuillez saisir les 3 notes : \n");
    scanf("%f %f %f", &N1, &N2, &N3);

    M = (N1 + N2 + N3) / 3;
    printf("La moyenne de l'etudiant est : %.2f \n", M);

    if(M < 10)
        printf("La mention de l'etudiant est : Insuffisant.\n");
    else if(M < 12)
        printf("La mention de l'etudiant est : Passable.\n");
    else if(M < 14)
        printf("La mention de l'etudiant est : Assez bien.\n");
    else if(M < 16)
        printf("La mention de l'etudiant est : Bien.\n");
    else
        printf("La mention de l'etudiant est : Tres bien.\n");


    return 0;
}