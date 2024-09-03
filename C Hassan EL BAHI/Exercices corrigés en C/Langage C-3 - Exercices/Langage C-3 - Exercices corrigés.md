
# Exercice #12

Écrire un programme qui retourne si deux nombres entiers donnés sont de même signe ou non.

``` C
#include <stdio.h>  
  
int main() {  
  
    int A, B;  
  
    printf("Veuillez saisir la valeur de A : ");  
    scanf("%d", &A);  
  
    printf("Donner B : ");  
    scanf("%d", &B);  
  
    if(A * B > 0)  
        printf("A et B ont le meme signe.");  
    else  
        printf("A et B n'ont pas le meme signe.");  
  
    return 0;  
}
```


# Exercice #13

Écrire un programme qui échange les contenus de deux données numérique si elles sont de même signe, sinon il met la somme des deux dans la première donnée et leur produit dans la seconde. 

``` C
#include <stdio.h>  
  
int main() {  
  
    int A, B, C, D;  
  
    printf("Veuillez saisir la valeur de A : ");  
    scanf("%d", &A);  
  
    printf("Veuillez saisir la valeur de B : ");  
    scanf("%d", &B);  
  
    if(A * B > 0){   
        C = A;  
        A = B;  
        B = C;  
    }  
    else{  
        C = A + B;  
        D = A * B;  
        A = C;  
        B = D;  
    }  
  
    printf("La nouvelle valeur de A est %d\n", A);  
    printf("La nouvelle valeur de B est %d\n", b);
  
  
    return 0;  
}
```


# Exercice #14

Un magasin facture 0,30€ les dix premières photocopies, 0,25€ les vingt suivantes et 0,20€ au-delà. Écrire un programme qui demande à l'utilisateur le nombre de photocopies effectuées et qui affiche la facture correspondante.

``` C
#include <stdio.h>  
  
int main() {  
  
    int N;  
    float F;  
  
    printf("Veuillez donner le nombre de copie : ");  
    scanf("%d", &N);  
  
    if(N <= 10){  
        F = N * 0.30;  
    }  
    else if(N <= 30){  
        F = 10 * 0.30 + (N - 10) * 0.25;  
    }  
    else if(N > 30){  
        F = 10 * 0.30 + 20 * 0.25 + (N - 30) * 0.20;  
    }  
  
    printf("Le montant de la facture a payer est : %.2f Euros", F);  
  
  
  
  
    return 0;  
}
```


# Exercice #15

Écrire un programme qui demande l'âge d'un enfant à l'utilisateur. Ensuite, il l'informe de sa catégorie : "Poussin" de 6 à 7 ans, "Pupille" de 8 à 9 ans, "Minime" de 10 à 11 ans, "Cadet" après 12 ans.

``` C
#include <stdio.h>  
  
int main() {  
  
    int age;  
  
    printf("Veuillez saisir l'age de votre enfant : ");  
    scanf("%d", &age);  
  
    if(age >= 6 && age <= 7)  
        printf("La categorie de l'enfant est Poussin");  
    else if(age >= 8 && age <= 9)  
        printf("La categorie de l'enfant est Pupille");  
    else if(age >= 10 && age <= 11)  
        printf("La categorie de l'enfant est Minime");  
    else if(age >= 12 && age <= 15)  
        printf("La categorie de l'enfant est Cadet");  
    else  
        printf("La categorie de l'enfant n'existe pas");  
  
  
    return 0;  
}
```


# Exercice #16

Écrire un programme permettant de saisir trois notes (sur 20) d'un étudiant, calculant sa moyenne et affichant cette moyenne avec la mention ("Très bien à partir de 16, "Bien" entre 14 et 16, "Assez bien" entre 12 et 14, "Passable" entre 10 et 12, "Insuffisant" en dessous de 10)
**PS** : On suppose que l'étudiant va saisir des notes comprises entre 0 et 20.

``` C
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
```


# Exercice #17

Écrire un programme qui affiche la ou les solutions d'une équation du second degré de la forme suivante :
$$
ax^2 + bx + c
$$
**NB** : Utiliser les fonctions **pow()** et **sqrt** pour calculer la puissance et la racine carrée.

``` C
#include <stdio.h>  
#include <math.h>  
  
int main() {  
  
    float a, b, c, delta, x, x1, x2;  
  
    printf("Veuillez saisir les valeurs de a, b et c : \n");  
    scanf("%f %f %f", &a, &b, &c);  
  
    delta = pow(b, 2) - (4 * a * c);  
  
    if(delta < 0){  
        printf("Pas de solution reelles\n");  
    }  
    else if(delta == 0){  
        x = ( (-b) / (2 * a) );  
  
        printf("La solution est : %.2f", x);  
    }  
    else if(delta > 0){  
        x1 = ( (-b) - sqrt(delta) ) / (2 * a);  
        x2 = ( (-b) + sqrt(delta) ) / (2 * a);  
  
        printf("Les solutions sont : %.2f et %.2f\n", x1, x2);  
    }  
  
  
    return 0;  
}
```


# Exercice #18

Les habitants d'un ville paient l'impôt selon les règles suivantes :
- Les hommes de plus de 20 ans paient l'impôt
- Les femmes paient l'impôt si elles ont entre 18 et 35 ans
- Les autres ne paient pas d'impôt
Écrire un programme qui demande l'âge et le sexe d'un habitant et affiche si celui-ci est imposable.

``` C
#include <stdio.h>  
#include <stdbool.h>  
  
int main() {  
  
    int age;  
    char sexe;  
    bool C1, C2;  
  
    debut:  
    printf("Veuillez entrer votre sexe : \n");  
    scanf("%c", &sexe);  
  
    printf("Veuillez entrer votre age : \n");  
    scanf(" %d", &age);  
  
    /* Méthode 1  
    if ( ( sexe == 'H' && age >= 20 ) || ( sexe == 'F' && age >= 18 && age <= 35 ) )        printf("L'habitant est imposable");    else        printf("L'habitant est non imposable");*/  
    // Méthode 2    C1 = sexe == 'H' && age >= 20;  
    C2 = sexe == 'F' && age >= 18 && age <= 35;  
  
    if(C1 || C2)  
        printf("L'habitant est imposable");  
    else  
        printf("L'habitant est non imposable");  
  
    return 0;  
}
```


# Exercice #19

Les produits vendus dans un magasin sont classés en trois catégories de point de vue TVA : A = 7%, B = 20%, C = 25%. Écrivez un programme qui calcule le prix TTC d'un produit connaissant son prix hors taxe et sa catégorie.

``` C
#include <stdio.h>  
  
int main() {  
  
    float PHT;  
    char cat;  
      
    printf("Veuillez entrer le prix hors taxe de votre produit : \n");  
    scanf("%f", &PHT);  
  
    printf("Veuillez entrer la categorie de TVA de votre produit : \n");  
    scanf(" %c", &cat);  
  
    switch(cat){  
        case 'A':  
            printf("Le prix TTC de produit est : %.2f euros\n", PHT + PHT * 0.07);  
            break;  
        case 'B':  
            printf("Le prix TTC de produit est : %.2f euros\n", PHT + PHT * 0.20);  
            break;  
        case 'C':  
            printf("Le prix TTC de produit est : %.2f euros\n", PHT + PHT * 0.25);  
            break;  
        default:  
            printf("La categorie n'existe pas !");  
            break;  
    }  
      
  
    return 0;  
}
```


# Exercice #20

Rédiger un programme qui demande deux nombres entiers et l'un des opérateurs suivant : +, -, \*, / puis effectue l'opération correspond et affiche le résultat de cette opération. 

``` C
#include <stdio.h>  
  
int main() {  
  
    int A, B;  
    char op;  
  
    debut:  
    printf("Veuillez saisir la valeur de A : ");  
    scanf("%d", &A);  
  
    printf("Veuillez saisir l'operateur : ");  
    scanf(" %c", &op);  
  
    printf("Veuillez saisir la valeur de B : ");  
    scanf("%d", &B);  
  
    switch(op){  
        case '+':  
            printf("A + B = %d", A + B);  
            break;  
        case '-':  
            printf("A - B = %d", A - B);  
            break;  
        case '*':  
            printf("A * B= %d", A * B);  
            break;  
        case '/':  
            if(B != 0){  
                printf("A / B = %d", A / B);  
            }  
            else{  
                printf("La division par 0 est impossible");  
            }  
  
            break;  
        default:  
            printf("Erreur !, L'operateur est incorrect");  
            break;  
    }  
  
  
    return 0;  
}
```


# Exercice #21

Écrire un programme qui demande à l'utilisateur de saisir un nombre puis en fonction du nombre saisi :
- 6 : affiche "le personnage va à droite".
- 4 : affiche "le personnage va à gauche".
- 8 : affiche "le personnage va en haut".
- 4 : affiche "le personnage va en bas".
- dans le cas d'un autre caractère, affiche : "erreur de saisie, le personnage ne bouge pas".

``` C
#include <stdio.h>  
  
int main() {  
  
    int nb;  
  
    printf("Veuillez saisir un nombre : \n");  
    scanf("%d", &nb);  
  
    switch(nb){  
        case 6:  
            printf("Le personnage va a droite\n");  
            break;  
        case 4:  
            printf("Le personnage va a gauche\n");  
            break;  
        case 8:  
            printf("Le personnage va en haut\n");  
            break;  
        case 2:  
            printf("Le personnage va en bas\n");  
            break;  
        default:  
            printf("erreur de saisie, Le personnage ne bouge pas\n");  
            break;  
    }  
  
  
  
    return 0;  
}
```


# Exercice #22

Écrire un programme qui vérifie si un nombre est pair ou impair.

``` C
#include <stdio.h>  
  
int main() {  
  
    int nb, calcul;  
  
    printf("Veuillez entrer un nombre : \n");  
    scanf("%d", &nb);  
  
    if( (nb % 2) == 0 )  
        printf("%d est pair", nb);  
    else  
        printf("%d est impair", nb);  
  
  
  
  
  
    return 0;  
}
```


# Exercice #23

Écrire un programme qui demande à l'utilisateur de saisir une année et qui vérifie si elle est bissextile (366 jours) ou non.

``` C
#include <stdio.h>  
  
int main() {  
  
    int annee;  
      
    printf("Veuillez saisir une annee: \n");  
    scanf("%d", &annee);  
  
    if( ( annee % 4 == 0 && annee % 100 != 0 ) || (annee % 400 == 0) ){  
        printf("%d est une annee bissextile.\n\n");  
    }  
    else{  
        printf("%d n'est pas une annee bissextile.\n\n");  
    }  
  
  
    return 0;  
}
```
