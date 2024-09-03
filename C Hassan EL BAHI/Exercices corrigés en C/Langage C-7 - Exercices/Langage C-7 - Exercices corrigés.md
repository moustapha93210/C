
# Exercice #69

Écrire un programme utilisant une fonction qui affiche le tableau de multiplication d'un entier positif x.

``` C
#include <stdio.h>  
  
//Déclaration de la fonction qui permettra d'afficher la table de multiplication de N  
void TMultiplication(int N){  
  
    int i;  
  
    printf("La table de multiplication de %d est : \n", N);  
  
    for(i = 0; i <= 10; i++)  
        printf("%d x %d = %d\n", N, i, N * i);  
  
}  
  
  
int main(){  
  
    int N;  
  
    // Saisie et lecture de N  
    printf("Veuillez saisir un nombre : \n");  
    scanf("%d", &N);  
  
  
    //Appel de la fonction TMultiplication(int N)  
    TMultiplication(N);  
    TMultiplication(2);  
    TMultiplication(1);  
    TMultiplication(9);  
    TMultiplication(7);  
  
  
    return 0;  
}
```


# Exercice #70

Écrire un programme utilisant une fonction qui affiche le tableau de multiplication d'un entier positif x.

``` C
#include <stdio.h>  
  
// Définition de la fonction qui mettre au cube le réel saisie par l'utilisateur  
int cube(int N){  
  
    return N * N * N;  
  
}  
  
int main(){  
  
    int N;  
  
    // Saisie et lecture du réel entrer par l'utilisateur  
    printf("Veuillez entrer un nombre : \n");  
    scanf("%d", &N);  
  
    // Appel de la fonction cube(int N)  
    printf("Le cube de %d est : %d", N, cube(N));  
  
  
  
  
    return 0;  
}
```


# Exercice #71

Écrire un programme qui demande à l'utilisateur de saisir une année et qui utilise une fonction pour vérifier si l'année est bissextile (366 jours) ou non.

``` C
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
```


# Exercice #72

Écrire un programme utilisant une fonction qui détermine si un nombre est premier ou non (rappel : un nombre premier n'est divisible que par 1 et par lui même).

``` C
#include <stdio.h>  
  
// Déclaration de la fonction qui définir si N est premier où non  
void premier(int N){  
  
    int i, estPremier;  
    estPremier = 1;  
  
    for(i = 2; i < N/2; i++) {  
  
        if (N % i == 0){  
            estPremier = 0;  
            break;  
        }  
    }  
  
    if(estPremier == 1)  
        printf("%d est un nombre premier.\n", N);  
    else  
        printf("%d est un nombre non premier\n", N);  
  
}  
  
  
  
int main(){  
  
    int N;  
  
    // Saisie et lecture de la variable N  
    printf("Veuillez entrer un nombre : ");  
    scanf("%d", &N);  
  
  
    // Appel de la fonction premier(int N)  
    premier(N);  
    premier(16);  
    premier(33);  
    premier(97);  
    premier(7);  
  
  
  
    return 0;  
}
```


# Exercice #73

Écrire un programme qui demande à l'utilisateur d'entrer un entier, puis le programme utilise une fonction pour compter et afficher le nombre de chiffres qui composent cet entier

``` C
#include <stdio.h>  
  
  
int nbrChiffres(int N){  
  
    int nbr = 0;  
  
    do{  
  
        N = N / 10;  
        nbr++;  
          
        /*  
        printf("%d / 10 = %d\n", N, N / 10);        printf("Nombre sotckes : %d\n", N % 10);        printf("Nbr = %d\n\n", Nbr);         */  
    }while(N != 0);  
  
  
  
    return nbr;  
}  
  
  
  
int main(){  
  
    int N;  
  
  
    printf("Veuillez entrer un entier : \n");  
    scanf("%d", &N);  
  
    printf("Nombre de chiffres dans le nombre %d est : %d", N, nbrChiffres(N));  
  
  
  
  
    return 0;  
}
```


# Exercice #74

Écrire un programme utilisant des fonctions qui demande à l'utilisateur de saisir le rayon du cercle, puis le programme affiche le diamètre, la surface et le périmètre du cercle
$$ D = 2 \times r $$$$ S = \pi \times r^2 $$$$ C = 2 \times \pi \times r $$
``` C
#include <stdio.h>  
  
  
float diametre(float R){  
  
    float d;  
  
    d = R * 2;  
  
    return d;  
}  
  
float surface(float R){  
  
    return R * R * 3.14;  
}  
  
float perimetre(float R){  
  
    return 2 * R * 3.14;  
}  
  
  
  
  
int main(){  
  
    float R;  
  
  
    // Saisie et lecture du rayon du cercle entré par l'utilisateur    
    printf("Veuillez entrer le rayon du cercle : \n");  
    scanf("%f", &R);

	// Affichage du diamètre, de la surface et du périmètre du cercle
    printf("Le diametre du cercle est : %.2f\n", diametre(R));  
    printf("La surface du cercle est : %.2f\n", surface(R));  
    printf("Le perimetre du cercle est : %.2f\n", perimetre(R));  
  
  
  
  
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
  
  
void saisi(){  
  
    // Saisie et lecture de a  
    printf("Veuillez entrer a : \n");  
    scanf("%f", &a);  
  
    // Saisie et lecture de b  
    printf("Veuillez entrer b : \n");  
    scanf("%f", &b);  
  
    // Saisie et lecture de b  
    printf("Veuillez entrer c : \n");  
    scanf("%f", &c);  
}  
  
  
float discriminant(){  
    delta = pow(b, 2)  - ( 4 * a * c );  
  
    return delta;  
}  
  
void solution(){  
  
    float x1, x2, x;  
  
    if(delta < 0)  
        printf("Il n'y a pas de solutions reelles.\n");  
    else if(delta == 0){  
  
        x = (-b) / ( 2 * a);  
  
        printf("La solution est : %.2f.\n", x);  
    }  
    else{  
        x1 = ( -b - sqrt(delta) ) / (2 * a );  
        x2 = ( -b + sqrt(delta) ) / (2 * a );  
  
        printf("Les solutions sont : %.2f et %.2f.\n", x1, x2);  
    }  
}  
  
  
  
int main(){  
  
    saisi();  
    discriminant();  
    solution();  
  
    saisi();  
    discriminant();  
    solution();  
  
    saisi();  
    discriminant();  
    solution();  
  
    saisi();  
    discriminant();  
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
  
  
float somme(float T[]){  
  
    float S;  
    int i;  
    S = 0;  
  
  
    for(i = 0; i < 10; i++)  
        S = S + T[i];  
  
    return S;  
}  
  
  
float produit(float T[]){  
  
    float P;  
    int i;  
    P = 1;  
  
    for(i = 0; i < 10; i++)  
        P = P * T[i];  
  
    return P;  
}  
  
  
float moyenne(float T[]){  
  
    float S, M;  
  
    S = somme(T);  
  
    M = S / 10;  
  
  
    return M;  
}  
  
void PN(float T[]){  
  
    int i;  
  
    printf("\nLes elements positif du tableau sont : ");  
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
  
    float T[10];  
    int i;  
  
    //Saisie, Contrôle et Lecture du tableau  
    printf("Veuillez saisir les elements du tableau : \n");  
  
  
    for(i = 0; i < 10; i++){  
  
        printf("T[%d] = ", i+1);  
        scanf("%f", &T[i]);  
    }  
  
    printf("La somme des elements du tableau est : %.2f\n", somme(T) );  
    printf("Le produit des elements du tableau est : %.2f\n", produit(T));  
    printf("La moyenne des elements du tableau est : %.2f\n", moyenne(T));  
  
    PN(T);  
  
  
  
  
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
  
  
int maximum(int T[]){  
  
    int max, i;  
  
    max = T[0];  
  
    for(i = 0; i < 10; i++){  
  
        if(T[i] > max)  
            max = T[i];  
  
    }  
  
    return max;  
}  
  
  
int minimum(int T[]){  
  
    int min, i;  
  
    min = T[0];  
  
    for(i = 0; i < 10; i++){  
  
        if(T[i] < min)  
            min = T[i];  
  
    }  
  
  
    return min;  
}  
  
  
void inverse(int TE[]){  
  
    int TS[10];  
    int i;  
  
    for(i = 0; i < 10; i++)  
        TS[9 - i] = TE[i];  
  
    printf("Les elements du tableau inverse sont : \n");  
  
    for(i = 0; i < 10; i++)  
        printf("TS[%d] = %d\n", i+1, TS[i]);  
  
}  
  
  
  
int main(){  
  
    int T[10];  
    int i;  
  
    //Saisie et lecture de T  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(i = 0; i < 10; i++){  
  
        printf("T[%d] = ", i+1);  
        scanf("%d", &T[i]);  
  
    }  
  
    printf("Le max des elements du tableau est : %d\n", maximum(T));  
    printf("Le min des elements du tableau T est : %d\n", minimum(T));  
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
  
  
  
float T[10];  
  
  
// Fonction qui permet de saisir, contrôler et lire T  
void remplirT(){  
  
    int i;  
  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(i = 0; i < 10; i++){  
  
        printf("T[%d] = ", i+1);  
        scanf("%f", &T[i]);  
  
    }  
}  
  
  
  
// Fonction qui permet d'afficher un tableau  
void afficherT(){  
  
    int i;  
  
    for(i = 0; i < 10; i++)  
        printf("%.2f  ", T[i]);  
}  
  
  
  
// Fonction qui trie un tableau dans l'ordre croissant  
void trieCT(){  
  
    int i, j;  
    float Tmp;  
  
    for(i = 0; i < 10; i++){  
  
        for(j = i+1; j < 10; j++){  
  
            if(T[i] > T[j]){  
  
                Tmp = T[i];  
                T[i] = T[j];  
                T[j] = Tmp;  
  
            }  
        }  
    }  
  
    printf("\nLes elements du tableau par ordre croissant : \n");  
    afficherT();  
}  
  
  
  
// Fonction qui trie un tableau dans l'ordre décroissant  
void trieDT(){  
  
    int i, j;  
    float Tmp;  
  
  
    for(i = 0; i < 10; i++){  
  
        for(j = i+1; j < 10; j++){  
  
            if(T[i] < T[j]){  
  
                Tmp = T[i];  
                T[i] = T[j];  
                T[j] = Tmp;  
            }  
        }  
    }  
  
    printf("\nLes elements du tableau par ordre decroissant : \n");  
    afficherT();  
}  
  
  
  
int main(){  
  
    remplirT();  
    trieCT();  
    trieDT();  
  
  
  
    return 0;  
}
```


