

# Exercice #1

Écrire un programme qui demande l'année de naissance d'un personne, puis il calcule et affiche l'âge de la personne.

``` C
#include <stdio.h>  
  
int main(){  
  
    int annee_naissance, age;  
  
    printf("Quelle est votre annee de naissance ? \n");  
    scanf("%d", &annee_naissance);  
  
    age = 2024 - annee_naissance;  
  
    printf("Vous avez alors %d ans cette annee!", age);  
  
  
    return 0;  
}
```


# Exercice #2

Écrire un programme qui demande à l'utilisateur de taper la largeur et la longueur d'un rectangle et qui en affiche le périmètre et la surface.

``` C
#include <stdio.h>  
  
int main() {  
  
    float largeur, longueur, S, P;  
  
    printf("Veuillez entrer la largeur du rectangle : ");  
    scanf("%f", &largeur);  
  
    printf("Veuillez entrer la longueur du rectangle : ");  
    scanf("%f", &longueur);  
  
    P = 2 * (longueur + largeur);  
    S = longueur * largeur;  
  
    printf("Le perimetre du rectangle est de %.2f cm.\n", P);  
    printf("La surface du rectangle est de %.2f cm.\n", S);  
  
    return 0;  
}
```

# Exercice #3

Écrire un programme qui demande à l'utilisateur de saisir deux réels X et Y, et qui affiche la puissance de X^y

``` C
#include <stdio.h>  
#include <math.h>  
  
int main() {  
  
    float X, Y, P;  
  
    printf("Donner la valeur de X : ");  
    scanf("%f", &X);  
  
    printf("Donner la valeur de Y : ");  
    scanf("%f", &Y);  
  
    P = pow(X, Y);  
  
    printf("La puissance est : %.2f", P);  
  
  
    return 0;  
}
```


# Exercice #4

Écrire un programme opérations qui calcule la somme, le produit, la différence et la division de deux nombres réels.

``` C
#include <stdio.h>  
  
int main() {  
  
    float A, B;  
    float S, P, Df, Dv;  
  
    printf("Veuillez entrer la valeur de A : ");  
    scanf("%f", &A);  
  
    printf("Veuillez entrer la valeur de B : ");  
    scanf("%f", &B);  
  
    S = A + B;  
    P = A * B;  
    Df = A - B;  
    Dv = A / B;  
  
    printf("A + B = %.2f\n", S);  
    printf("A * B = %.2f\n", P);  
    printf("A - B = %.2f\n", Df);  
    printf("A / B = %.2f\n", Dv);  
  
    return 0;  
}
```


# Exercice #5

``` C
#include <stdio.h>  
  
int main() {  
  
    float N1, N2, N3, N4, N5, somme, moy;  
  
    printf("Veuillez entrer 5 notes : ");  
    scanf("%f%f%f%f%f", &N1, &N2, &N3, &N4, &N5);  
  
    somme = N1 + N2 + N3 + N4 + N5;  
    moy = somme / 5;  
  
    printf("La somme des notes est de : %.2f\n", somme);  
    printf("La moyenne des notes est de : %.2f\n", moy);  
  
  
    return 0;  
}
```


# Exercice #6

Écrire un programme qui demande à l'utilisateur de taper le rayon d'un sphère, puis alcule et affiche son volume.
$$
Volume d'une sphère = 4 * pi * r^3 / 3
$$

``` C
#include <stdio.h>  
#include <math.h>  
  
int main() {  
  
    float V, R;  
    const float Pi = 3.14;  
  
  
    printf("Entrer le rayon de la sphere : ");  
    scanf("%f", &R);  
  
    V = (4 * Pi * pow(R, 3)) / 3;  
  
    printf("Le volume de la sphere est de : %.2f cm", V);  
  
  
  
  
  
    return 0;  
}
```


# Exercice #7

Écrire un programme qui demande à l'utilisateur de saisir 2 entiers A et B, qui échange le contenu des variables A et B puis qui affiche A et B.

``` C
#include <stdio.h>  
  
int main() {  
  
    int A, B, C;  
  
    printf("Veuillez saisir la valeur de A : ");  
    scanf("%d", &A);  
  
    printf("Veuillez saisir la valeur de B : ");  
    scanf("%d", &B);  
  
    C = A;  
    A = B;  
    B = C;  
  
    printf("La nouvelle valeur de A est %d\n", A);  
    printf("La nouvelle valeur de B est %d\n", B);  
  
  
  
    return 0;  
}
```


# Exercice #8

Écrire un programme qui demande à l'utilisateur de saisir 2 entiers A et B, qui échange le contenu des variables A et B puis qui affiche A et B.
*Cette fois sans utiliser d'autre variable que A et B*

``` C
#include <stdio.h>  
  
int main() {  
  
    int A, B;  
  
    printf("Veuillez saisir la valeur de A : ");  
    scanf("%d", &A);  
  
    printf("Veuillez saisir la valeur de B : ");  
    scanf("%d", &B);  
  
    A = A + B;  
    B = A - B;  
    A = A - B;  
  
  
    printf("A = %d\n", A);  
    printf("B = %d\n", B);  
  
  
    return 0;  
}
```


# Exercice #9

``` C
#include <stdio.h>  
  
int main() {  
  
    int T, H, M, S, R;  
  
    printf("Veuillez entrer un temps (Ce temps sera exprimer en secondes) : ");  
    scanf("%d", &T);  
  
    H = T / 3600;  
    R = T % 3600;  
    M = R / 60;  
    S = R % 60;  
  
    printf("%dH : %dm : %ds", H, M, S);  
  
  
  
    return 0;  
}
```



# Exercice #10

``` C
#include <stdio.h>  
#include <math.h>  
  
int main() {  
  
    float Xa, Ya, Xb, Yb;  
    float AB;  
  
    printf("Veuillez entrer les coordonees X de A : ");  
    scanf("%f", &Xa);  
  
    printf("Veuillez entrer les coordonees Y de A : ");  
    scanf("%f", &Ya);  
  
    printf("Veuillez entrer les coordonees X de B : ");  
    scanf("%f", &Xb);  
  
    printf("Veuillez entrer les coordonees X de B : ");  
    scanf("%f", &Yb);  
  
    AB = sqrt(pow((Xb - Xa),2) + pow((Yb - Ya),2) );  
  
    printf("La distance entre les points A et B est de : %.2f", AB);  
  
    return 0;  
}
```



# Exercice #11

Écrire un programme qui affiche ma résistance équivalente à trois résistances R1, R2, R3 :
- si les résistances sont branchées en série.
- si les résistances sont branchées en parallèle.

``` C
#include <stdio.h>  
  
int main(void) {  
  
    float R1, R2, R3;  
    float Rser, Rpar;  
  
    printf("Veuillez entrer les valeurs de R1, R2, R3 : ");  
    scanf("%f %f %f", &R1, &R2, &R3);  
  
    Rser = R1 + R2 + R3;  
    Rpar = ( ( R1 * R2 * R3 ) / ( ( R1 + R2 ) + ( R1 * R3 ) + ( R2 * R3 ) ) );  
  
    printf("La valeur de la resistance en serie est : %.2f\n", Rser);  
    printf("La valeur de la resistance parallele est : %.2f\n", Rpar);  
  
    return 0;  
}
```








