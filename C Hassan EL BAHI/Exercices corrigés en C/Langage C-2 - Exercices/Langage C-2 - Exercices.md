

# Exercice #1

Écrire un programme qui demande l'année de naissance d'un personne, puis il calcule et affiche l'âge de la personne.

``` C
#include <stdio.h>  
  
int main(){  
  
    int annee, age;  
  
    printf("Veuillez saisir votre annee de naissance : ");  
    scanf("%d", &annee);  
  
    age = 2024 - annee;  
  
    printf("Votre age est de : %d", age);  
  
  
    return 0;  
}
```

# Exercice #2

Écrire un programme qui demande à l'utilisateur de taper la largeur et la longueur d'un rectangle et qui en affiche le périmètre et la surface.

``` C
#include <stdio.h>  
  
int main() {  
  
    float largeur, longueur, surface, perimetre;  
  
    printf("Veuillez taper la largeur du rectangle : ");  
    scanf("%f", &largeur);  
  
    printf("Veuillez taper la longueur du rectangle : ");  
    scanf("%f", &longueur);  
  
    surface = longueur * largeur;  
    perimetre = 2 * (longueur + largeur);  
  
    printf("La surface du rectangle est de %.2f cm.\n", surface);  
    printf("Le perimetre du rectangle est de %.2f cm.\n", perimetre);  
  
  
    return 0;  
}
```


# Exercice #3

Écrire un programme qui demande à l'utilisateur de saisir deux réels X et Y, et qui affiche la puissance de X^y

``` C
#include <stdio.h>  
#include <math.h>  
  
int main() {  
  
    float X, Y, puissance;  
  
    printf("Veuillez saisir un reel X : ");  
    scanf("%f", &X);  
  
    printf("Veuillez saisir un reel Y : ");  
    scanf("%f", &Y);  
  
    puissance = pow(X, Y);  
  
    printf("%.3f puissance %.3f = %.2f", X, Y, puissance);  
  
  
    return 0;  
}
```


# Exercice #4

Écrire un programme opérations qui calcule la somme, le produit, la différence et la division de deux nombres réels.

``` C
#include <stdio.h>  
  
  
int main() {  
  
    float X, Y, somme, produit, difference, division;  
  
    printf("Donner une 1ere valeur : ");  
    scanf("%f", &X);  
  
    printf("Donner une 2eme valeur : ");  
    scanf("%f", &Y);  
  
    somme = X + Y;  
    produit = X * Y;  
    difference = X - Y;  
    division = X / Y;  
  
    printf("La somme est : %.2f\n", somme);  
    printf("Le produit est : %.2f\n", produit);  
    printf("La difference est : %.2f\n", difference);  
    printf("La division est : %.2f\n", division);  
  
    return 0;  
}
```


# Exercice #5

Écrire un programme qui demande à l'utilisateur de taper 5 notes et qui affiche leur somme et leur moyenne

``` C
#include <stdio.h>  
  
int main() {  
  
    float N1, N2, N3, N4, N5, somme, moy;  
  
    printf("Veuillez entrer N1 : ");  
    scanf("%f", &N1);  
  
    printf("Veuillez entrer N2 : ");  
    scanf("%f", &N2);  
  
    printf("Veuillez entrer N3 : ");  
    scanf("%f", &N3);  
  
    printf("Veuillez entrer N4 : ");  
    scanf("%f", &N4);  
  
    printf("Veuillez entrer N5 : ");  
    scanf("%f", &N5);  
  
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
  
int main() {  
  
    float r, volSphere;  
    const float pi = 3.14;  
  
  
    printf("Entrer le rayon de la sphere : ");  
    scanf("%f", &r);  
  
    const float r3 = r * r * r;  
    volSphere = ((4 * pi * r3) / 3);  
  
    printf("Le volume de la sphere est de : %.2f cm", volSphere);  
  
  
  
  
  
    return 0;  
}
```


# Exercice #7

Écrire un programme qui demande à l'utilisateur de saisir 2 entiers A et B, qui échange le contenu des variables A et B puis qui affiche A et B.

``` C
#include <stdio.h>  
  
int main() {  
  
    int A, B, C;  
  
    printf("Veuillez saisir A : ");  
    scanf("%d", &A);  
  
    printf("Veuillez saisir B : ");  
    scanf("%d", &B);  
  
    C = B;  
    B = A;  
    A = C;  
  
    printf("A = %d\n", A);  
    printf("B = %d\n", B);  
  
  
  
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
  
  
    printf("La nouvelle valeur de A est %d\n", A);  
    printf("La nouvelle valeur de B est %d\n", B);  
  
  
    return 0;  
}
```


# Exercice #9

Écrire un programme qiu demande un temps T (entier) exprimé en secondes, et qui le convertit en heures, minutes, secondes.

*Exemple : T = 56263 secondes => 15 heures 37 minutes et 43 secondes*

``` C
#include <stdio.h>  
  
int main() {  
  
    int T, sec, min, h, reste;  
  
    printf("Veuillez entrer un temps (Ce temps sera exprimer en secondes) : ");  
    scanf("%d", &T);  
  
    h = T / 3600;  
    reste = T % 3600;  
    min = reste / 60;  
    sec = reste % 60;  
  
    printf("T = %d secondes => %d heures %d minutes %d secondes", T, h, min, sec);  
  
  
  
    return 0;  
}
```



# Exercice #10

Écrire un programme qui calcule et affiche la distance entre deux points A et B du plan dont les coordonnées (Xa, Ya) et (Xb, Yb) sont entrées au clavier comme entiers.

##### Formule pour calculer la distance entre 2 points :
$$
d = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}
$$
**NB** : Utiliser les fonctions **pow()** et **sqrt()** pour calculer la puissance et la racine carré.

``` C
#include <stdio.h>  
#include <math.h>  
  
int main() {  
  
    float Xa, Xb, Ya, Yb, distanceAB;  
  
    printf("Veuillez entrer les coordonees du point A\n");  
    printf("Xa : ");  
    scanf("%f", &Xa);  
  
    printf("Ya : ");  
    scanf("%f", &Ya);  
  
    printf("\nVeuillez entrer les coordonees du point B\n");  
    printf("Xb : ");  
    scanf("%f", &Xb);  
  
    printf("Yb : ");  
    scanf("%f", &Yb);  
  
    distanceAB = sqrt(pow((Xb - Xa),2) + pow((Yb - Ya),2) );  
  
    printf("La distance entre les points A et B est de : %.2f cm", distanceAB);  
  
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




