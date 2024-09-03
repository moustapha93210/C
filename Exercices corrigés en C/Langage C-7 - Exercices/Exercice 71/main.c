#include <stdio.h>

// Définition de la fonction qui calcule si une année est bissextile ou non
void typeAnnee(int a){

    if( ( a % 4 == 0 && a % 100 != 0 ) || ( a % 400 == 0 ) )
        printf("%d est une annee bissextile.\n", a);
    else
        printf("%d n'est pas une annee bissextile.\n", a);

}


int main(){

    int annee;


    // Saisie et lecture de l'année entrer par l'utilisateur
    printf("Veuillez saisir une annee : \n");
    scanf("%d", &annee);


    // Appel de la fonction anneeBissextile(int a)
    typeAnnee(annee);
    typeAnnee(1555);
    typeAnnee(2031);
    typeAnnee(2024);
    typeAnnee(2025);



    return 0;
}
