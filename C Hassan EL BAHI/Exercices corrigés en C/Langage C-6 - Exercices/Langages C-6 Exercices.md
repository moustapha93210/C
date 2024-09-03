
# Exercice #49

Écrire un programme qui déclare, remplisse et affiche un tableau de 10 entiers en les mettant tous à zéro.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[10], i;  
  
    for(i = 0; i < 10; i++){  
  
        T[i] = 0;  
  
    }  
  
    for(i = 0; i < 10; i++){  
  
        printf("T[%d] = %d \n", i, T[i]);  
  
    }  
  
  
  
    return 0;  
}
```


# Exercice #50

Écrire un programme qui déclare, remplisse et affiche un tableau contenant les six voyelles de l'alphabet français.

``` C
#include <stdio.h>  
  
int main(){  
  
    char T[6];  
    int i;  
  
    T[0] = 'a';  
    T[1] = 'e';  
    T[2] = 'o';  
    T[3] = 'u';  
    T[4] = 'i';  
    T[5] = 'y';  
  
    for(i = 0; i < 6; i++){  
  
        printf("T[%d] = %c \n", i, T[i]);  
  
    }  
  
  
  
  
    return 0;  
}
```


# Exercice #51

Écrire un programme qui demande à l'utilisateur de saisir 10 réels stockés dans un tableau, puis le programme calcule et affiche la somme, le produit et la moyenne des éléments du tableau

``` C
#include <stdio.h>  
  
int main(){  
  
    float reel, T[10], S, produit, moy;  
    int i, j;  
  
    printf("Veuillez saisir 10 reels \n");  
  
    // Saisir 10 réels et les stockes dans un tableau  
    for(i = 0; i < 10; i++){  
  
        printf("reel numero %d : \n", i + 1);  
        scanf("%f", &T[i]);  
  
    }  
  
    // Affiche le tableau  
    for(i = 0; i < 10; i++){  
  
        printf("T[%d] = %.2f\n", i, T[i]);  
  
    }  
  
    // Calcule la somme  
    S = 0;  
  
    for(i = 0; i < 10; i++){  
  
        S = S + T[i];  
  
    }  
    printf("La somme de ce tableau de 10 reels est de : %.2f\n", S);  
  
    // Calcule le produit  
    produit = 1;  
  
    for(i = 0; i < 10; i++){  
  
        produit = produit * T[i];  
  
    }  
    printf("Le produit de ce tableau de 10 reels est de : %.2f\n", produit);  
  
    // Calcule la moyenne  
    for(i = 0; i < 10; i++){  
  
        moy = moy + T[i];  
  
    }  
    printf("La moyenne de ce tableau de 10 reels est de : %.2f", moy / 10);  
  
  
  
    return 0;  
}
```


# Exercice #52

Écrire un programme qui effectue le produit scalaire de deux vecteurs de même taille (3 éléments) représentés par des tableaux à une dimension.

$$
U \cdot V = U_1 \times V_1 + U_2 \times V_2 + U_3 \times V_3
$$

``` C
#include <stdio.h>  
  
int main(){  
  
    float U[3], V[3], UxV;  
    int i;  
  
    // Saisir et remplir U[i]  
    for(i = 0; i < 3; i++){  
  
        printf("U[%d] = ", i);  
        scanf("%f", &U[i]);  
  
    }  
  
    printf("\n");  
  
    // Saisir et remplir V[i]  
    for(i = 0; i < 3; i++){  
  
        printf("V[%d] = ", i);  
        scanf("%f", &V[i]);  
  
    }  
  
    printf("\n");  
  
    //Afficher le produit scalaire  
    UxV = 0;  
  
    for(i = 0; i < 3; i++){  
  
        UxV = UxV + (U[i] * V[i]);  
  
    }  
  
    printf("UxV = %2.f\n", UxV);  
  
  
  
    return 0;  
}
```


# Exercice #53

Écrire un programme qui demande à l'utilisateur de saisir 10 entiers qu'on stocke dans un tableau T. Ensuite, le programme détermine et affiche le minimum des éléments du tableau T.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[10];  
    int i, min, indice_min;  
  
    for(i = 0; i < 10; i++){  
  
        printf("T[%d] = ", i);  
        scanf("%d", &T[i]);  
  
  
    }  
  
    min = T[0];  
  
    for(i = 0; i < 10; i++){  
  
        if(min > T[i]){  
  
            min = T[i];  
            indice_min = i;  
  
        }  
  
  
  
    }  
  
    printf("Minimum : T[%d] = %d", indice_min, min);  
  
  
  
  
  
    return 0;  
}
```


# Exercice #54

Écrire un programme qui demande à l'utilisateur de saisir 10 entiers qu'on stocke dans un tableau T. Ensuite, le programme détermine et affiche le maximum des éléments du tableau T.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[10];  
    int i, max, indice_max;  
  
    for(i = 0; i < 10; i++){  
  
        printf("T[%d] = ", i);  
        scanf("%d", &T[i]);  
  
    }  
  
    max = T[0];  
  
    for(i = 0; i < 10; i++){  
  
        if(max < T[i]){  
  
            max = T[i];  
            indice_max = i;  
  
        }  
  
    }  
  
    printf("Maximum : T[%d] = %d", indice_max, max);  
  
  
  
  
    return 0;  
}
```


# Exercice #55

Écrire un programme qui demande à l'utilisateur de saisir 10 entiers qu'on stocke dans un tableau T. Ensuite on redemande à l'utilisateur de saisir un entier n. L'objectif étant de chercher l'existence du nombre n dans T, le résultat va s'afficher comme suit :

- Si n se trouve dans T : "n se trouve dans le tableau".
- Si n ne se trouve pas dans T : "n ne se trouve pas dans le tableau".

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[10];  
    int i, n, indice_n, valeur_T;  
  
    for(i = 0; i < 10; i++){  
  
        printf("T[%d] = ", i);  
        scanf("%d", &T[i]);  
  
    }  
  
    printf("\nVeuillez saisir un entier n : \n");  
    scanf("%d", &n);  
  
    indice_n = 0;  
    valeur_T = 0;  
  
  
    for(i = 0; i < 10; i++){  
  
  
        if(n == T[i]){  
  
            indice_n = i;  
            valeur_T = T[i];  
  
            printf("n =  %d\n", n);  
            printf("T[%d] = %d \n", indice_n, valeur_T);  
            printf("%d se trouve dans le tableau\n\n", n);  
  
        }  
  
  
    }  
  
    if(indice_n == 0 && valeur_T == 0)  
        printf("%d ne se trouve pas dans le tableau.\n", n);  
  
  
  
  
  
  
  
    return 0;  
}
```


# Exercice #56

Écrire un programme qui demande à l'utilisateur de saisir 50 entiers qu'on stocke dans un tableau T. Ensuite on redemande à l'utilisateur de saisir un entier n. Le programme ensuite va calculer le nombre d'occurrence de n dans T.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[5];  
    int i, n, nbOccurrence, indice_nbOccurrence, valeur_T;  
  
    for(i = 0; i < 5; i++){  
  
        printf("T[%d] = ", i);  
        scanf("%d", &T[i]);  
  
    }  
  
    printf("\nVeuillez saisir un entier n : \n");  
    scanf("%d", &n);  
  
    nbOccurrence = 0;  
    indice_nbOccurrence = 0;  
    valeur_T = 0;  
  
    for(i = 0; i < 5; i++){  
  
        if(n == T[i]){  
  
            indice_nbOccurrence = i;  
            valeur_T = T[i];  
            nbOccurrence++;  
  
            printf("T[%d] = %d\n", indice_nbOccurrence, valeur_T);  
  
        }  
  
    }  
  
    if(nbOccurrence != 0)  
        printf("%d est present %d fois dans le tableau de valeur.\n", n, nbOccurrence);  
    else  
        printf("%d n'est pas present dans le tableau de valeur.\n", n);  
  
  
  
  
  
    return 0;  
}
```


# Exercice #57

Écrire un programme permettant, à l'utilisateur de saisir les notes d'une class (10 étudiants). Le programme, une fois la saisie terminée, renvoie le nombre de ces notes supérieur à la moyenne de la classe.

``` C
#include <stdio.h>  
  
int main(){  
  
    float T[10];  
    float S, moy, notes;  
    int i, supMoy, indice_supMoy;  
  
    // Remplissage du tableau de notes T[0] de la classe  
    for(i = 0; i < 10; i++){  
  
        recNotes:  
        printf("T[%d] = ", i);  
        if( scanf("%f", &T[i]) != 1 || T[i] < 0 || T[i] > 20){  
            printf("Erreur ! Veuillez entrer une note comprise entre 0 et 20.\n");  
            while(getchar() != '\n');// Vider le buffer d'entrée  
            goto recNotes;  
        }  
  
    }  
  
    // Calcul de la moyenne de la classe  
    S = 0;  
  
    for(i = 0; i < 10; i++){  
  
        S = S + T[i];  
  
    }  
    moy = S / 10;  
  
    // Comptage des notes supérieur à la moyenne de la classe  
    printf("Notes superieur a la moyenne de la classe : \n");  
  
    supMoy = 0;  
  
    for(i = 0; i < 10; i++){  
  
        if(T[i] > moy){  
            indice_supMoy = i;  
            notes = T[i];  
            supMoy++;  
  
            printf("T[%d] = %.2f\n", indice_supMoy, notes);  
  
        }  
  
    }  
  
    printf("Moyenne de la classe : %.2f/20\n", moy);  
    printf("Nombre de notes superieur a la moyenne de la classe : %d\n", supMoy);  
  
  
  
  
    return 0;  
}
```


# Exercice #58

Pour sa naissance, la grand-mère de Mohamed place un somme de 1000dh sur son compte épargne rémunéré au taux de 2% (chaque année le compte est augmenté de 2%). Écrire un programme permettant d'afficher un tableau sur 20 ans associant à chaque anniversaire de Mohamed la somme acquise sur son compte.

``` C
#include <stdio.h>  
  
int main() {  
  
    float argentGM[20];  
    float S;  
    int i;  
  
    S = 1000;  
  
    for(i = 0; i < 20; i++){  
  
        S = S  + (S * 0.02);  
        argentGM[i] = S;  
  
        printf("Annee : %d\n", i);  
        printf("Somme sur le compte de Mohamed : %.2f dh\n\n", argentGM[i]);  
  
    }  
  
  
  
  
  
  
    return 0;  
}
```


# Exercice #59

Écrire un programme qui renverse un tableau (Taille 6). Celui-ci doit prendre comme entrée un tableau et renvoyer le tableau de même taille ayant les valeurs dans l'ordre inverse.

``` C
#include <stdio.h>  
  
int main(){  
  
  
    int T[6], TI[6];  
    int i, j;  
  
  
    printf("Tableau initial : \n");  
    for(i = 0; i < 6; i++){  
  
        recTab:  
        printf("T[%d] = ", i);  
        if( scanf("%d", &T[i]) != 1){  
            printf("Erreur ! Veuillez entrer un nombre.\n");  
            while(getchar() != '\n');  
            goto recTab;  
        }  
  
    }  
  
    printf("Tableau d'Entree : \n");  
  
    for(i = 0; i < 6; i++){  
  
        printf("%d\n", T[i]);  
  
    }  
  
    for(i = 0; i < 6; i++){  
  
        TI[5-i] = T[i];  
  
    }  
  
    printf("Tableau Inverse : \n");  
  
    for(i = 0; i < 6; i++){  
  
        printf("%d\n", TI[i]);  
  
    }  
  
  
  
    return 0;  
}
```


# Exercice #60

Écrire un programme qui permet de créer et d'afficher le tableau des N premiers nombres premiers. N est un nombre entier saisi par l'utilisateur. (S'aider de l'exercice 35 pour le faire)

``` C
#include <stdio.h>  
  
int main(){  
  
    int N, i;  
  
    recn:  
    printf("Veuillez saisir un nombre entier : \n");  
    if( scanf("%d", &N) != 1 || N <= 0){  
        printf("Erreur Veuillez entrer un nombre entier positif.\n");  
        while(getchar() != '\n');  
        goto recn;  
    }  
  
    int T[N];  
    int compteur, x, estPremier;  
  
    compteur = 0;  
    x = 2;  
  
    do{  
        estPremier = 0;  
  
        for(i = 2; i <= x / 2; i++){  
  
            if(x % i == 0){  
  
                estPremier = 1;  
  
                printf("%d // %d = %d\n", x, i, x % i);  
                break;  
  
            }  
  
        }  
  
        if(estPremier == 0){  
  
            T[compteur] = x;  
            compteur++;  
  
        }  
  
        x++;  
    }while(compteur < N);  
  
    printf("Les %d premiers nombres premiers sont : \n", N);  
  
    for(i = 0; i < N; i++)  
        printf("%d\n", T[i]);  
  
  
  
    return 0;  
}
```


# Exercice #61

Écrire un programme qui demande à l'utilisateur de saisir 10 entiers qu'on stocke dans un tableau T. Ensuite, le programme détermine et affiche le premier et le deuxième plus grand élément du tableau.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[10];  
    int i, Max1, Max2;  
  
    for(i = 0;i < 10; i++){  
  
        recNb:  
        printf("T[%d] = ", i);  
        if(scanf("%d", &T[i]) != 1){  
            printf("Erreur ! Veuillez saisir un nombre;\n");  
            while(getchar() != '\n');  
            goto recNb;  
        }  
  
    }  
  
    Max1 = T[0];  
    Max2 = T[0];  
  
    for(i = 0; i < 10; i++){  
  
        if(T[i] > Max1){  
  
            Max2 = Max1;  
            Max1 = T[i];  
  
        }  
        else if(T[i] > Max2 && T[i] < Max1){  
  
            Max2 = T[i];  
  
        }  
  
    }  
  
    printf("1ère Valeur Maximal du tableau = %d\n", Max1);  
    printf("2eme valeur maximale du tableau = %d\n", Max2);  
  
  
  
  
  
    return 0;  
}
```


# Exercice #62

Écrire un programme qui permet d'insérer un élément dans un tableau à un position spécifiée. Le programme doit également afficher un message d'erreur si la position d'insertion n'est pas valide.

``` C
#include <stdio.h>  
  
int main(){  
  
    int taille, i, N, P;  
  
    recTaille:  
    printf("Veuillez selectionner la taille de votre tableau : \n");  
    if( scanf("%d", &taille) != 1 || taille < 0){  
        printf("Erreur ! Veuillez entrer un nombre.\n");  
        while(getchar() != '\n');  
        goto recTaille;  
    }  
  
    int T[taille];  
  
    for(i = 0; i < taille; i++){  
  
        recT:  
        printf("T[%d] = ", i);  
        if( scanf("%d", &T[i]) != 1 ){  
            printf("Erreur ! Veuillez entrer un nombre.\n");  
            while(getchar() != '\n');  
            goto recT;  
        }  
  
    }  
  
    recN:  
    printf("Entrer la valeur de l'element que vous voulez inserer dans le tableau : \n");  
    if( scanf("%d", &N) != 1 ){  
        printf("Erreur ! Veuillez entrer un nombre.\n");  
        while(getchar() != '\n');  
        goto recN;  
    }  
  
    recPosition:  
    printf("Entrer la position de l'element que vous voulez inserer dans le tableau : \n");  
    if( scanf("%d", &P) != 1 || P < 0 || P > taille){  
        printf("Erreur ! Veuillez entrer un nombre compris entre 0 et %d.\n", taille);  
        while(getchar() != '\n');  
        goto recPosition;  
    }  
  
    if(P >= 0 && P <= taille){  
  
        for(i = taille; i >= P; i--){  
  
            T[i] = T[i - 1];  
  
            printf("T[%d] = %d\n", i, T[i]);  
  
        }  
  
        T[P] = N;  
        taille++;  
  
        printf("Les elements de tableau apres insertion sont : \n");  
  
        for(i = 0; i < taille; i++){  
  
            printf("T[%d] = %d\n", i, T[i]);  
  
        }  
  
    }  
  
  
    return 0;  
}
```


# Exercice #63

Écrire un programme qui permet de supprimer un élément dans un tableau à une position spécifiée. Le programme doit également afficher un message d'erreur si la position d'insertion n'est pas valide.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[100];  
    int i, Taille, pos;  
  
  
    // Choisir la taille du tableau  
    recTaille:  
    printf("Veuillez choisir la taille de votre tableau : \n");  
    if( scanf("%d", &Taille) != 1 || Taille < 0){  
        printf("Erreur ! Veuillez entrer un nombre entier positif.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recTaille;// Recommence la boucle si la saisie est invalide  
    }  
  
  
    // Remplir le tableau T[Taille]  
    printf("Veuillez remplir votre tableau : \n");  
    for(i = 0; i < Taille; i++){  
  
        recTab:  
        printf("T[%d] = ", i);  
        if( scanf("%d", &T[i]) != 1){  
            printf("Erreur ! Veuillez entrer un nombre.\n");  
            while(getchar() != '\n');// Vider le buffer d'entrée  
            goto recTab;// Recommence la boucle si la saisie est invalide  
        }  
  
    }  
  
  
    // Choisir l'element que l'on veut supprimer  
    recPosition:  
    printf("Veuillez choisir la position de l'element que vous voulez supprimer : \n");  
    if( scanf("%d", &pos) != 1 || pos < 0 || pos > Taille){  
        printf("Erreur ! Veuillez entrer un nombre compris entre 0 et %d.\n", Taille);  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recPosition;// Recommence la boucle si la saisie est invalide  
    }  
  
  
    // Suppression de l'élément à la position choisie  
    for(i = pos; i <= Taille - 1; i++){  
  
        T[i] = T[i + 1];// Décaler les éléments à gauche  
  
        printf("T[%d] = %d\n", i, T[i]);  
  
    }  
  
    Taille--;// Réduire la taille du tableau  
  
    // Affichage du tableau après suppression    printf("Les elements du tableau apres la suppression sont : \n");  
    for(i = 0; i < Taille; i++){  
  
        printf("T[%d] = %d\n", i, T[i]);  
  
    }  
  
  
  
  
  
  
  
  
  
    return 0;  
}
```


# Exercice #64

Écrire un programme qui demande à l'utilisateur de remplir un tableau de 8 entiers, puis le programme détermine et affiche les éléments uniques du tableau.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[8], Frq[8];  
    int i, j, compteur;  
  
    printf("Veuillez remplir le tableau : \n");  
  
    // Remplissage du Tableau T[8]  
    for(i = 0; i < 8; i++){  
  
        recTab:  
        printf("T[%d] = ", i);  
        if( scanf("%d", &T[i]) != 1 ){  
            printf("Erreur ! Veuillez entrer un nombre.\n");  
            while(getchar() != '\n');// Vider le buffer d'entrée  
            goto recTab;  
        }  
  
    }  
  
    printf("\n");  
  
  
    //Remplissage du tableau Frq[8]  
    for(i = 0; i < 8; i++){  
  
        Frq[i] = -1;  
  
        printf("Frq[%d] = %d\n", i, Frq[i]);  
  
    }  
  
    printf("\n");  
  
  
    //Compare les éléments du tableau pour trouver les éléments unique  
    for(i = 0; i < 8; i++) {  
  
        compteur = 1;  
  
        for(j = i + 1; j < 8; j++){  
  
            if(T[i] == T[j]){  
  
                compteur++;  
                Frq[j] = 0;  
  
                printf("T[%d] == T[%d]\n", i, j);  
                printf("compteur = %d\n", compteur);  
                printf("Frq[%d] = 0\n", j);  
            }  
        }  
  
        if (Frq[i] != 0){  
  
            Frq[i] = compteur;  
  
            printf("Frq[%d] = %d\n\n", i, compteur);  
        }  
  
    }  
  
  
    //Affichage du tableau Frq[8] après la comparaison pour trouver des éléments uniques du tableau T[8]  
    printf("Frq[8] apres comparaison : \n");  
  
    for(i = 0; i < 8; i++){  
  
        printf("Frq[%d] = %d\n", i, Frq[i]);  
  
    }  
  
  
    // Affichage des éléments uniques du tableau  
    printf("Les elements unique du tableau sont : \n");  
  
    for(i = 0; i < 8; i++) {  
  
  
        if (Frq[i] == 1)  
            printf("T[%d] = %d\n", i, T[i]);  
  
  
    }  
  
  
    return 0;  
}
```


# Exercice #65

Écrire un programme qui demande à l'utilisateur de remplir un tableau de 8 entiers, puis le programme détermine et affiche les éléments qui ne sont pas unique dans le tableau.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[8], Frq[8];  
    int i, j, compteur;  
  
  
    // Remplissage du tableau T[8]  
    printf("Veuillez saisir les 8 entiers du tableau T : \n");  
  
    for(i = 0; i < 8; i++){  
  
        recTab:  
        printf("T[%d] = ", i);  
        if( scanf("%d", &T[i]) != 1 ){  
            printf("Erreur ! Veuillez entrer un nombre.\n");  
            while(getchar() != '\n');// Vider le buffer d'entrée  
            goto recTab;  
        }  
    }  
  
    printf("\n");  
  
  
    // Remplissage du tableau Frq[8]  
    for(i = 0; i < 8; i++){  
  
        Frq[i] = -1;  
  
        printf("Frq[%d] = %d\n", i, Frq[i]);  
  
    }  
  
    printf("\n");  
  
  
    // Comparaison des éléments du tableau T[8] pour trouver les éléments Non-Unique  
    for(i = 0; i < 8; i++){  
  
        compteur = 1;  
  
        for(j = i+1; j < 8; j++){  
  
            if(T[i] == T[j]){  
  
                compteur++;  
                Frq[j] = 0;  
  
                printf("Frq[%d] == Frq[%d] (%d == %d)\n", i, j, T[i], T[j]);  
                printf("compteur = %d\n", compteur);  
                printf("Frq[%d] = 0\n\n", j);  
  
            }  
        }  
  
        if(Frq[i] != 0){  
  
            Frq[i] = compteur;  
  
            printf("Frq[%d] = %d\n\n", i, compteur);  
        }  
    }  
  
    printf("\n");  
  
  
    // Affichage du tableau Frq[8] après les comparaison  
    for(i = 0; i < 8; i++){  
  
        printf("Frq[%d] = %d\n", i, Frq[i]);  
  
    }  
  
    printf("\nLes elements Non-Unique du tableau T[8] sont : \n");  
  
    // Affichage des éléments Non Unique du tableau T[8]  
    for(i = 0; i < 8; i++){  
  
        if(Frq[i] >= 2)  
            printf("T[%d] = %d\n", i, T[i]);  
  
    }  
  
  
  
  
  
  
    return 0;  
}
```


# Exercice #66

 Écrire un programme qui demande à l'utilisateur d'entrer des éléments dans un tableau, puis le programme place les éléments pairs et impairs dans deux tableau séparés.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[10], tabImpair[10], tabPair[10];  
    int i, Taille, Icmp, Pcmp;  
  
  
    // Saisie de la taille du tableau T  
    recTaille:  
    printf("Veuillez saisir la taille de votre tableau : \n");  
    if( scanf("%d", &Taille) != 1 || Taille < 0) {  
        printf("Erreur ! Veuillez entrer un nombre superieur a 0.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recTaille;// Recommence la boucle si la saisie est invalide  
    }  
  
  
    // Remplissage du tableau T  
    printf("Veuillez saisir les elements du tableau T : \n");  
  
    for(i = 0; i < Taille; i++){  
  
        recTab:  
        printf("T[%d] = ", i);  
        if( scanf("%d", &T[i]) != 1 ) {  
            printf("Erreur ! Veuillez entrer un nombre.\n");  
            while (getchar() != '\n');// Vider le buffer d'entrée  
            goto recTab;// Recommence la boucle si la saisie est invalide  
        }  
    }  
  
    printf("\n");  
  
    Pcmp = 0;  
    Icmp = 0;  
  
    for(i = 0; i < Taille; i++){  
  
        T[i];  
  
        // Pair  
        if(T[i] % 2 == 0){  
  
            tabPair[Pcmp] = T[i];  
            Pcmp++;  
  
        }  
        // Impair  
        else {  
  
            tabImpair[Icmp] = T[i];  
            Icmp++;  
  
        }  
  
    }  
  
    printf("Les elements du tableau pair sont : \n");  
  
    for(i = 0; i < Pcmp; i++){  
  
        printf("P[%d] = %d\n", i, tabPair[i]);  
  
    }  
  
    printf("Les elements du tableau impair sont : \n");  
  
    for(i = 0; i < Icmp; i++){  
  
        printf("I[%d] = %d\n", i, tabImpair[i]);  
  
    }  
  
  
    return 0;  
}
```


# Exercice #67

Écrire un programme qui demande à l'utilisateur de taper 8 entiers qui seront stockés dans un tableau. Le programme doit tirer le tableau par ordre croissant et doit afficher le tableau.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[8];  
    int i, j, variableTemporaire;  
  
  
  
    // Saisir les éléments du tableau  
    recTab:  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(i = 0; i < 8; i++){  
        printf("T[%d] = ", i);  
        if( scanf("%d",&T[i]) != 1 ){  
            printf("Erreur ! Veuillez entrer un nombre entier positif.\n");  
            while(getchar() !='\n');// Vider le buffer d'entrée  
            goto recTab;// Recommence la boucle si la saisie est invalide  
        }  
    }  
  
    printf("\n");  
  
    // Comparaison des éléments du tableau pour les placer dans l'odre croissant  
    for(i = 0; i < 8; i++){  
  
        for(j = i+1; j < 8; j++){  
  
            if(T[i] > T[j]){  
  
                printf("Avant changement: \n");  
                printf("T[%d] = %d\t", i, T[i]);  
                printf("T[%d] = %d\n", j, T[j]);  
  
                variableTemporaire = T[i];  
                T[i] = T[j];  
                T[j] = variableTemporaire;  
  
                printf("Apres changement: \n");  
                printf("T[%d] = %d\t", i, T[i]);  
                printf("T[%d] = %d\n\n", j, T[j]);  
  
            }  
  
        }  
  
    }  
  
  
    // Affichage du tableau dans l'odre croissant  
    printf("Les elements du tableau dans l'ordre croissant sont : \n");  
  
    for(i = 0; i < 8;i++){  
  
        printf("T[%d] = %d\n",i , T[i]);  
  
    }  
  
  
  
  
  
    return 0;  
}
```


# Exercice #68

Écrire un programme qui demande à l'utilisateur de taper 8 entiers qui seront stockés dans un tableau. Le programme doit tirer le tableau par ordre décroissant et doit afficher le tableau.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[8];  
    int i, j, tmp;  
  
  
    // Saisir les éléments du tableau T  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(i = 0; i < 8; i++){  
  
        recTab:  
        printf("T[%d] = ", i);  
        if( scanf("%d", &T[i]) != 1 ){  
            printf("Erreur ! Veuillez entrer un nombre.\n");  
            while(getchar() != '\n');// Vider le buffer d'entrée  
            goto recTab;// Recommencer la boucle si la saisie est invalide  
  
        }  
    }  
  
  
    // Comparer les éléments du tableau T et les ranger dans l'ordre croissant  
    for(i = 0; i < 8; i++){  
  
        for(j = i+1; j < 8; j++){  
  
            if(T[i] < T[j]){  
  
                printf("i = %d\t j = %d\n", i, j);  
                printf("Avant changement : \n");  
                printf("T[%d] = %d\t", i, T[i]);  
                printf("T[%d] = %d\n", j, T[j]);  
  
                tmp = T[i];  
                T[i] = T[j];  
                T[j] = tmp;  
  
                printf("Apres changement : \n");  
                printf("T[%d] = %d\t", i, T[i]);  
                printf("T[%d] = %d\n\n", j, T[j]);  
            }  
        }  
    }  
  
  
    // Afficher le tableau T ranger dans l'odre décroissant  
    printf("Tableau T ranger dans l'odre decroissant : \n");  
  
    for(i = 0; i < 8; i++){  
  
        printf("T[%d] = %d\n", i, T[i]);  
  
    }  
  
  
  
    return 0;  
}
```
