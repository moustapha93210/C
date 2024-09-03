
# Exercice #69

Écrire un programme utilisant une fonction qui affiche le tableau de multiplication d'un entier positif x.

``` C
#include <stdio.h>  
  
//Déclaration de la fonction qui permettra d'afficher la table de multiplication de N  
void afficheTabMultiplication(int N){  
  
    int i;  
  
    for(i = 0; i <= 10; i++)  
        printf("%d x %d = %d\n", N, i, N * i);  
  
}  
  
  
int main(){  
  
    int N;  
  
    // Saisie et lecture de N  
    recN:  
    printf("Veuillez saisir un nombre : \n");  
    if( scanf("%d", &N) != 1 ){  
        printf("Erreur ! Veuillez entrer un nombre.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recN;// Recommence la boucle si la saisie est invalide  
    }  
  
  
    //Appel de la fonction afficheTableMultiplication(int N)  
    afficheTabMultiplication(N);  
  
  
    return 0;  
}
```


# Exercice #70

Écrire un programme utilisant une fonction qui affiche le cube d'un nombre réel saisi au clavier

``` C
#include <stdio.h>  
#include <math.h>  
  
  
// Définition de la fonction qui mettre au cube le réel saisie par l'utilisateur  
void cubeReel(float R){  
  
    printf("reel = %.2f \n", R);  
    printf("(%.2f)^3 = %.2f\n\n", R, pow(R, 3) );  
  
}  
  
int main(){  
  
    float R;  
  
    // Saisie, contrôle et lecture du réel entrer par l'utilisateur  
    recNombre:  
    printf("Veuillez entrer un nombre : \n");  
    if(scanf("%f", &R) != 1 ){  
        printf("Erreur ! Veuillez entrer un nombre.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recNombre;// Recommence la boucle si la saisie est invalide  
    }  
  
    // Appel de la fonction cubeReel(R)  
    cubeReel(R);  
  
  
  
  
    return 0;  
}
```


# Exercice #71

Écrire un programme qui demande à l'utilisateur de saisir une année et qui utilise une fonction pour vérifier si l'année est bissextile (366 jours) ou non.

``` C
#include <stdio.h>  
#include <stdbool.h>  
  
  
int anneeBissextile(int annee){  
  
    bool estBissextile;  
  
    if( ( annee % 4 == 0 && annee % 100 != 0 ) || ( annee % 400 == 0 ) )  
        estBissextile = true;  
    else  
        estBissextile = false;  
  
  
  
    return estBissextile;  
  
}  
  
  
int main(){  
  
    int annee;  
  
  
    // Saisie, contrôle et lecture de l'année entrer par l'utilisateur  
    recAnnee:  
    printf("Veuillez saisir une annee : \n");  
    if( scanf("%d", &annee) != 1 || annee < 0){  
        printf("Erreur ! Veuillez entrer une annee correct.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recAnnee;// Recommence la boucle si la saisie est invalide  
    }  
  
  
    // Appel de la fonction anneeBissextile(int annee)  
    if(anneeBissextile(annee) == 1)  
        printf("%d est une annee bissextile.\n", annee);  
    else  
        printf("%d n'est pas une annee bissextile.\n", annee);  
  
  
  
  
    return 0;  
}
```


# Exercice #72

Écrire un programme utilisant une fonction qui détermine si un nombre est premier ou non (rappel : un nombre premier n'est divisible que par 1 et par lui même).

``` C
#include <stdio.h>  
  
  
int nbPremier(int N){  
  
    int i, estPremier;  
  
    for(i = 2; i < N/2; i++){  
  
  
        if(N % i == 0){  
  
            estPremier = 0;  
  
            printf("%d // %d = %d\n", N, i, N % i);  
            printf("estPremier = %d\n\n", estPremier);  
            break;  
  
        }  
        else{  
  
            estPremier = 1;  
  
            printf("%d // %d = %d\n", N, i, N % i);  
            printf("estPremier = %d\n\n", estPremier);  
        }  
    }  
  
    return estPremier;  
}  
  
  
int main(){  
  
    int N;  
  
  
    // Saisie, contrôle et lecture de la variable entière N  
    recN:  
    printf("Veuillez saisire un entier N : \n");  
    if( scanf("%d", &N) != 1 ){  
        printf("Erreur ! Veuillez entrer un nombre.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recN;// Recommence la boucle si la saisie est invalide  
    }  
  
    if( nbPremier(N) == 0 )  
        printf("%d n'est pas un nombre premier.\n", N);  
    else  
        printf("%d est un nombre premier.\n", N);  
  
  
  
  
  
    return 0;  
}
```


# Exercice #73

Écrire un programme qui demande à l'utilisateur d'entrer un entier, puis le programme utilise une fonction pour compter et afficher le nombre de chiffres qui composent cet entier

``` C
#include <stdio.h>  
  
  
int compteNbChiffre(int N){  
  
    int Nbr = 0;  
    int i;  
  
    do{  
  
        N = N / 10;  
        Nbr++;  
  
        printf("%d / 10 = %d\n", N, N / 10);  
        printf("Nombre sotckes : %d\n", N % 10);  
        printf("Nbr = %d\n\n", Nbr);  
  
    }while(N != 0);  
  
    // OU  
    /*    for(i = 0; i <= N; i++ ){  
        if(N != 0){  
            N = N / 10;            Nbr++;  
            printf("%d / 10 = %d\n", N, N / 10);            printf("Nombre sotckes : %d\n", N % 10);            printf("Nbr = %d\n\n", Nbr);  
        }  
    }    */  
    return Nbr;  
}  
  
  
  
int main(){  
  
    int N;  
  
    recN:  
    printf("Veuillez entrer un entier : \n");  
    if( scanf("%d", &N) != 1){  
        printf("Erreur ! Veuillez entrer un entier.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recN;// Recommence la boucle si la saisie est invalide  
    }  
  
    printf("%d = %d chiffres", N, compteNbChiffre(N));  
  
  
  
  
    return 0;  
}
```


# Exercice #74

Écrire un programme utilisant des fonctions qui demande à l'utilisateur de saisir le rayon du cercle, puis le programme affiche le diamètre, la surface et le périmètre du cercle
$$ D = 2 \times r $$$$ S = \pi \times r^2 $$$$ C = 2 \times \pi \times r $$
``` C
#include <stdio.h>  
#include <math.h>  
  
  
  
const double pi = 3.14;  
  
  
float diametreCercle(float rayon){  
  
    float diametre;  
  
    diametre = 2 * rayon;  
  
  
    return diametre;  
}  
  
float surfaceCercle(float rayon){  
  
    float surface;  
  
    surface = pi * pow(rayon, 2);  
  
  
    return surface;  
}  
  
float perimetreCercle(float rayon){  
  
    float perimetre;  
  
    perimetre = 2 * pi * rayon;  
  
  
    return perimetre;  
}  
  
  
  
  
int main(){  
  
    float R;  
  
  
    // Saisie, contrôle et lecture du rayon du cercle entré par l'utilisateur  
    recRayon:  
    printf("Veuillez entrer le rayon du cercle : \n");  
    if( scanf("%f", &R) != 1 ){  
        printf("Erreur ! Veuillez entrer un nombre.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recRayon;  
    }  

	// Affichage du diamètre, de la surface et du périmètre du cercle
    printf("Diametre du cercle = %.2f\n", diametreCercle(R));  
    printf("Surface du cercle = %.2f\n", surfaceCercle(R));  
    printf("Perimetre du cercle = %.2f\n", perimetreCercle(R));  
  
  
  
  
    return 0;  
}
```


# Exercice #75

Écrire un programme qui affiche la où les solutions d'une équation du second degré de la forme ax^2 + bx + c. Utiliser une fonction pour calculer le discriminant Delta et une autre pour afficher les solutions delta.

**PS** : pour calculer la racine carrée d'un nombre, nous utilisons la fonction : **sqrt**.
**Exemple** : Après l'exécution de l'instruction suivante la valeur de A sera 2

##### Formule du discriminant, Delta (Δ) :
$$ \Delta = b^2 - 4ac $$

#### Delta est négatif (Δ < 0) :
$$
\text{Pas de solutions réelles}
$$


#### Delta est nul (Δ = 0) :
$$
x = \frac{-b}{2a}
$$


#### Delta est positif (Δ > 0) :
$$ x_1 = \frac{-b + \sqrt{\Delta}}{2a}, \quad x_2 = \frac{-b - \sqrt{\Delta}}{2a} $$

``` C
#include <stdio.h>  
#include <math.h>  
  
float a, b, c;  
float delta;  
  
  
float discriminant(){  
  
    delta = pow(b, 2)  - ( 4 * a * c );  
  
    return delta;  
}  
  
void solution(){  
  
    float x1, x2, x;  
  
    if(delta < 0)  
        printf("Il n'y a pas de solutions.\n");  
    else if(delta == 0){  
  
        x = (-b) / ( 2 * a);  
  
        printf("La solution est : %.2f.\n", x);  
    }  
    else{  
        x1 = ( -b - sqrt(delta) ) / (2 * a );  
  
        x2 = ( -b + sqrt(delta) ) / (2 * a );  
  
        printf("Solution 1 = %.2f.\n", x1);  
        printf("Solution 2 = %.2f.\n", x2);  
    }  
  
}  
  
  
  
int main(){  
  
    // Saisie, contrôle et lecture de a  
    recA:  
    printf("Veuillez entrer a : \n");  
    if( scanf("%f", &a) != 1 ){  
        printf("Erreur ! Veuillez entrer un nombre.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recA;// Recommence la boucle si la saisie est invalide  
    }  
  
    // Saisie, contrôle et lecture de b  
    recB:  
    printf("Veuillez entrer b : \n");  
    if( scanf("%f", &b) != 1 ){  
        printf("Erreur ! Veuillez entrer un nombre.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recB;// Recommence la boucle si la saisie est invalide  
    }  
  
    // Saisie, contrôle et lecture de b  
    recC:  
    printf("Veuillez entrer c : \n");  
    if( scanf("%f", &c) != 1 ){  
        printf("Erreur ! Veuillez entrer un nombre.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recC;// Recommence la boucle si la saisie est invalide  
    }  
  
    printf("Discriminant = %.2f\n", discriminant());  
    solution();  
  
  
    return 0;  
}
```


# Exercice #76

Écrire un programme qui demande à l'utilisateur de saisir 10 réels stockés dans un tableau. Écrivez ensuite les fonctions suivantes :

- Trois fonctions qui permettent de calculer et d'afficher la somme, le produit et la moyenne des éléments du tableau.
- Une fonction qui détermine et affiche les éléments positifs et négatifs du tableau

``` C
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
```


# Exercice #77

Écrire un programme qui demande à l'utilisateur de saisir 10 réels stockés dans un tableau. Écrivez ensuite les fonctions suivantes :
- Une fonction qui détermine et affiche le maximum des éléments du tableau.

- Une fonction qui détermine et affiche le minimum des éléments du tableau.

- Une fonction qui renvoie le tableau de même taille ayant les valeurs dans l'ordre inverse.

``` C
#include <stdio.h>  
  
  
float maximum(float T[]){  
  
    float Max, Max0;  
    int i, j;  
  
  
    Max = T[0];  
    Max0 = T[0];  
  
    for(i = 0; i < 10; i++){  
  
        for(j = i+1; j < 10; j++){  
  
            if(Max < T[j]){  
  
                Max = T[j];  
  
                printf("Max = %.2f\n", Max0);  
                printf("Max < T[%d]\n", j);  
                printf("%.2f < %.2f\n", Max0, T[j]);  
                printf("Max = T[%d]\n", j);  
                printf("Max = %.2f\n\n", T[j]);  
  
                Max0 = Max;  
  
            }  
  
        }  
  
    }  
  
    return Max;  
}  
  
  
float minimum(float T[]){  
  
    float Min, Min0;  
    int i, j;  
  
  
    Min = T[0];  
    Min0 = T[0];  
  
    for(i = 0; i < 10; i ++){  
  
        for(j = i+1; j < 10; j++){  
  
            if(Min > T[j]){  
  
                Min = T[j];  
  
                printf("Min = %.2f\n", Min0);  
                printf("Min > T[%d]\n", j);  
                printf("%.2f > %.2f\n", Min0, T[j]);  
                printf("Min = T[%d]\n", j);  
                printf("Min = %.2f\n\n", T[j]);  
  
                Min0 = Min;  
            }  
        }  
    }  
  
  
    return Min;  
}  
  
  
void inverse(float T[]){  
  
    float TI[10];  
    int i;  
  
    for(i = 0; i < 10; i++)  
        TI[9 - i] = T[i];  
  
    printf("Tableau inverse : \n");  
  
    for(i = 0; i < 10; i++)  
        printf("TI[%d] = %.2f\n", i, TI[i]);  
  
}  
  
  
  
  
int main(){  
  
    float T[10];  
    int i;  
  
    //Saisie, contrôle et lecture de T  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(i = 0; i < 10; i++){  
  
        recTab:  
        printf("T[%d] = ", i);  
        if(scanf("%f", &T[i]) != 1){  
  
            printf("Erreur ! Veuillez saisir un nombre.\n");  
            while(getchar() != '\n');// Vider le buffer d'entrée  
            goto recTab;// Recommence la boucle si la saisie est invalide  
        }  
    }  
  
  
    printf("Le plus grand des elements du tableau T est : %.2f\n\n", maximum(T));  
    printf("Le plus petit des elements du tableau T est : %.2f\n\n", minimum(T));  
  
  
    inverse(T);  
  
    return 0;  
}
```


# Exercice #78

Écrire un programme qui demande à l'utilisateur de saisir 10 réels stockés dans un tableau. Écrivez ensuite les fonctions suivantes :

- Une fonction permettant de remplir les éléments du tableau.

- Une fonction permettant de remplir les éléments du tableau par ordre croissant.

- Une fonction permettant de remplir les éléments du tableau par ordre décroissant.

- Une fonction permettant d'afficher les éléments du tableau.

Tester toutes ces fonctions dans un programme principal.

``` C
#include <stdio.h>  
  
// Fonction qui permet de saisir, contrôler et lire T  
void remplir(int T[]){  
  
    int i;  
  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(i = 0; i < 10; i++){  
  
        recTab:  
        printf("T[%d] = ", i);  
        if( scanf("%d", &T[i]) != 1 ){  
  
            printf("Erreur ! Veuillez saisir un nombre.\n");  
            while(getchar() != '\n');// Vider le buffer d'entrée  
            goto recTab;// Recommence la boucle si la saisie est invalide  
        }  
    }  
  
}  
  
  
// Fonction qui trie un tableau dans l'ordre croissant  
void trieCroissant(int T[]){  
  
    int i, j, Tmp;  
  
    Tmp = T[0];  
  
    for(i = 0; i < 10; i++){  
  
        for(j = i+1; j < 10; j++){  
  
            if(T[i] > T[j]){  
  
                Tmp = T[i];  
                T[i] = T[j];  
                T[j] = Tmp;  
  
            }  
        }  
    }  
  
    printf("Les elements du tableau trier dans l'ordre croissant sont : \n");  
  
    for(i = 0; i < 10; i++)  
        printf("CT[%d] = %d\n", i, T[i]);  
  
}  
  
  
  
// Fonction qui trie un tableau dans l'ordre décroissant  
void trieDecroissant(int T[]){  
  
    int i, j, Tmp;  
  
    Tmp = T[0];  
  
    for(i = 0; i < 10; i++){  
  
        for(j = i+1; j < 10; j++){  
  
            if(T[i] < T[j]){  
  
                Tmp = T[i];  
                T[i] = T[j];  
                T[j] = Tmp;  
            }  
        }  
  
  
    }  
  
    printf("\nLes elements du tableau trier dans l'ordre decroissant sont : \n");  
  
    for(i = 0; i < 10; i++)  
        printf("DT[%d] = %d\n", i, T[i]);  
  
}  
  
  
  
// Fonction qui permet d'afficher un tableau  
void afficher(int T[]){  
  
    int i;  
  
    printf("\nLes elements du tableau sont : \n");  
  
    for(i = 0; i < 10; i++)  
        printf("T[%d] = [%d]", i, T[i]);  
  
}  
  
  
  
int main(){  
  
    int T[10];  
  
    remplir(T);  
    trieCroissant(T);  
    trieDecroissant(T);  
  
  
  
  
  
    return 0;  
}
```


