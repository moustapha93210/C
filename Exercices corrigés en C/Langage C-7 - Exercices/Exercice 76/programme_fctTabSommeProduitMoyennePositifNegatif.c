#include <stdio.h>

float T[10];
int i;

float somme(float tab[]){
    printf("\n\nSOMME\n");

    //int i;
    float S0 = 0;
    float S = 0;


    for(i = 0; i < 10; i++){

        S = S + T[i];

        printf("Iteration numero %d\n", i+1);
        printf("S = %.0f + %.0f = %.0f\n\n", S0, T[i], S);

        S0 = S;

    }

    return S;
}


float produit(float tab[]){
    printf("\n\nPRODUIT\n");

    float P0 = 1;
    float P = 1;

    for(i = 0; i < 10; i++){

        P = P * T[i];

        printf("Iteration numero %d\n", i+1);
        printf("P = %.2f x %.2f = %.2f\n\n", P0, T[i], P);

        P0 = P;

    }

    return P;
}


float moyenne(float tab[]){
    printf("\n\nMOYENNE\n");

    float M0 = 0;
    float M = 0;

    for(i = 0; i < 10; i++){

        M = M + T[i];
    }

    //M = somme(T) / 10;

    M0 = M;

    M = M / 10;

    printf("M = %.2f / 10 = %.2f\n", M0, M);


    return M;
}

void positifNegatif(float tab[]){

    float TPositif[10];
    int iP = 0;

    float TNegatif[10];
    int iN = 0;

    printf("Les elements positif du tableau sont : ");
    for(i = 0; i < 10; i++){
        if(T[i] > 0)
            printf("%.2f\t", T[i]);

    }

    printf("\nLes elements negatif du tableau sont : ");
    for(i = 0; i < 10; i++){
        if(T[i] < 0)
            printf("%.2f\t", T[i]);
    }
}


int main(){



    //Saisie, Contrôle et Lecture du tableau
    printf("Veuillez saisir les 10 reels du tableau : \n");


    for(i = 0; i < 10; i++){

        recTab:
        printf("T[%d] = ", i);
        if( scanf("%f", &T[i]) != 1 ){

            printf("Erreur ! Veuillez entrer un nombre.\n");
            while(getchar() != '\n');// Vider le buffer d'entrée
            goto recTab;// Recommence la boucle si la saisie est incorrect
        }
    }

    printf("Somme = %.2f\n\n", somme(T) );
    printf("Produit = %.2f\n\n", produit(T));
    printf("Moyenne = %.2f\n\n", moyenne(T));

    positifNegatif(T);






    return 0;
}
