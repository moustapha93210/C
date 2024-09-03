#include <stdio.h>


// Passsage par référence (par adresse)
void echange(int *A, int *B){

    int C, D;

    // Si *A et *B ont le même signe
    if(*A * *B > 0 ){

        C = *A;
        *A = *B;
        *B = C;

    }
    // Si *A et *B ont un signe différent
    else{

        C = *A + *B;
        D = *A * *B;
        *A = C;
        *B = D;
    }
}

/* Si on utilise le passage par valeur les modifications ne seront pas effectué car A et B sont vide
void echange(int A, int B){

    int C, D;

    // Si *A et *B ont le même signe
    if(A * B > 0 ){

        C = A;
        A = B;
        B = C;

    }
        // Si *A et *B ont un signe différent
    else{

        C = A + B;
        D = A * B;
        A = C;
        B = D;
    }
}
*/



int main(){

    int A, B;


    // Saisie et lecture de A
    printf("Veuillez entrer la valeur de A : \n");
    scanf("%d", &A);


    // Saisie et lecture de B
    printf("Veuillez entrer la valeur de B : \n");
    scanf("%d", &B);

    //Apelle de la fonction qui permet le changement de A et B (passage par référence)
    echange(&A, &B);


    printf("La nouvelle valeur de A est : %d\n", A);
    printf("La nouvelle valeur de B est : %d\n", B);




    return 0;
}
