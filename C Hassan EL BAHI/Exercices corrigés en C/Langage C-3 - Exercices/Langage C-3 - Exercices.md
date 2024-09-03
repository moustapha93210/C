
# Exercice #12

``` C
#include <stdio.h>  
  
int main() {  
  
    int nb1, nb2;  
  
    printf("Donner nb1 : ");  
    scanf("%d", &nb1);  
  
    printf("Donner nb2 : ");  
    scanf("%d", &nb2);  
  
    if( (nb1 > 0 && nb2 > 0) || (nb1 < 0 && nb2 < 0))  
        printf("%d et %d ont le meme signe.", nb1, nb2);  
    else  
        printf("%d et %d n'ont pas le meme signe.", nb1, nb2);  
  
    return 0;  
}
```


# Exercice #13

Écrire un programme qui échange les contenus de deux données numérique si elles sont de même signe, sinon il met la somme des deux dans la première donnée et leur produit dans la seconde.

``` C
#include <stdio.h>  
  
int main() {  
  
    int A, B, C, D;  
  
    printf("Donner la valeur de A : ");  
    scanf("%d", &A);  
  
    printf("Donner la valeur de B : ");  
    scanf("%d", &B);  
  
    if(A * B > 0){  
        printf("meme signe\n");  
        C = A;  
        A = B;  
        B = C;  
    }  
    else{  
        printf("signe different\n");  
        C = A + B;  
        D = A * B;  
        A = C;  
        B = D;  
    }  
  
    printf("A = %d\n", A);  
    printf("B = %d\n", B);  
  
  
    return 0;  
}
```


# Exercice #14

Un magasin facture 0,30€ les dix premières photocopies, 0,25€ les vingt suivantes et 0,20€ au-delà. Écrire un programme qui demande à l'utilisateur le nombre de photocopies effectuées et qui affiche la facture correspondante.

``` C
#include <stdio.h>  
  
int main() {  
  
    int nb;  
    float facture, prix, prixFinal;  
  
    printf("Veuillez donner le nombre de photocopie que vous souhaitez faire : ");  
    scanf("%d", &nb);  
  
    prix = 0;  
    prixFinal = 0;  
  
    if(nb <= 10){  
        prix = nb * 0.30;  
    }  
    else if(nb > 10 && nb <= 30){  
        prix = 10 * 0.30 + (nb - 10) * 0.25;  
    }  
    else if(nb > 30){  
        prix = 10 * 0.30 + 20 * 0.25 + (nb - 30) * 0.20;  
    }  
  
    facture = prix;  
  
    printf("Votre est facture est de : %.2f Euros", facture);  
  
  
  
  
    return 0;  
}
```


# Exercice #15

Écrire un programme qui demande l'âge d'un enfant à l'utilisateur. Ensuite, il l'informe de sa catégorie : "Poussin" de 6 à 7 ans, "Pupille" de 8 à 9 ans, "Minime" de 10 à 11 ans, "Cadet" après 12 ans.

``` C
#include <stdio.h>  
  
int main() {  
  
    int age;  
  
    printf("Veuillez entrez l'age de votre enfant : ");  
    scanf("%d", &age);  
  
    switch(age) {  
        case 6:  
        case 7:  
            printf("Poussin\n");  
            break;  
        case 8:  
        case 9:  
            printf("Pupille\n");  
            break;  
        case 10:  
        case 11:  
            printf("Minime\n");  
            break;  
        case 12:  
            printf("Cadet\n");  
            break;  
        default:  
            if(age < 6 || age > 12){  
                printf("Votre enfant ne peut pas etre classe.\n");  
            }  
            break;  
    }  
  
  
    return 0;  
}
```


# Exercice #16

Écrire un programme permettant de saisir trois notes (sur 20) d'un étudiant, calculant sa moyenne et affichant cette moyenne avec la mention ("Très bien" à partir de 16, "Bien" entre 14 et 16, "Assez bien" entre 12 et 14, "Passable" entre 10 et 12, "Insuffisant" en dessous de 10)
**PS** : On suppose que l'étudiant va saisir des notes comprises entre 0 et 20.

``` C
#include <stdio.h>  
  
int main() {  
  
    float N1, N2, N3, moy;  
  
    debut:  
    printf("Veuillez saisir 3 notes comprises entre 0 et 20 : \n");  
    scanf("%f %f %f", &N1, &N2, &N3);  
  
    if( (N1 >= 0 && N1 <= 20) && (N2 >= 0 && N2 <= 20 ) && (N3 >= 0 && N3 <= 20) ){  
  
        moy = (N1 + N2 + N3) / 3;  
  
        if(moy < 10){  
            printf("Moyenne : %.2f / 20\n", moy);  
            printf("Mention : Insuffisant.\n");  
        }  
        else if(moy < 12){  
            printf("Moyenne : %.2f / 20\n", moy);  
            printf("Mention : Passable.\n");  
        }  
        else if(moy < 14){  
            printf("Moyenne : %.2f / 20\n", moy);  
            printf("Mention : Assez bien.\n");  
        }  
        else if(moy < 16){  
            printf("Moyenne : %.2f / 20\n", moy);  
            printf("Mention : Bien.\n");  
        }  
        else{  
            printf("Moyenne : %.2f / 20\n", moy);  
            printf("Mention : Tres bien.\n");  
        }  
    }  
    else{  
        printf("Erreur !, Les notes doivent etre comprise entre 0 et 20.\n\n");  
        goto debut;  
    }  
  
  
  
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
  
    float a, b, c, S1, S2;  
  
    printf("Veuillez saisir a, b et c : \n");  
    scanf("%f %f %f", &a, &b, &c);  
  
    const float delta = ( pow(b, 2) ) - (4 * a * c);  
  
    //printf("delta = %.2f\n", delta);  
  
    if(delta < 0){  
        printf("La solution est l'ensemble vide\n");  
    }  
    else if(delta == 0){  
        S1 = ( (-b) / (2 * a) );  
  
        printf("La solution de l'equation degre est : %.2f", S1);  
    }  
    else if(delta > 0){  
        S1 = ( (-b) - sqrt(delta) ) / (2 * a);  
        S2 = ( (-b) + sqrt(delta) ) / (2 * a);  
  
        printf("Les solutions de l'equation de second degre sont : %.2f et %.2f\n", S1, S2);  
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
  
int main() {  
  
    int age;  
    char sexe;  
  
    debut:  
    printf("Veuillez entrer votre age : \n");  
    scanf("%d", &age);  
  
    printf("Veuillez entrer votre sexe : \n");  
    scanf(" %c", &sexe);  
  
    if( ( age > 0  && age < 110 ) && ( sexe == 'm' || sexe == 'M' || sexe == 'f' || sexe == 'F' ) ){  
  
        if(age > 20 && ( ( sexe == 'm' || sexe == 'M' ) ) ){  
            printf("Age : %d ans\n", age);  
            printf("Sexe : %c\n", sexe);  
            printf("Vous payez l'impot\n");  
        }  
        else if( ( sexe == 'f' || sexe == 'F' ) && ( age >= 18 && age <= 35 ) ){  
            printf("Age : %d ans\n", age);  
            printf("Sexe : %c\n", sexe);  
            printf("Vous payez l'impot\n");  
        }  
        else{  
            printf("Age : %d ans\n", age);  
            printf("Sexe : %c\n", sexe);  
            printf("Vous ne payez pas l'impot\n");  
        }  
    }  
    else{  
        printf("Erreur !\n");  
        printf("Votre age doit etre compris entre 1 et 109 ans !\n");  
        printf("Votre sexe doit etre : 'm' ou 'M' ou 'f' ou 'F'\n\n");  
  
        goto debut;  
    }  
  
  
    return 0;  
}
```


# Exercice #19

Les produits vendus dans un magasin sont classés en trois catégories de point de vue TVA : A = 7%, B = 20%, C = 25%. Écrivez un programme qui calcule le prix TTC d'un produit connaissant son prix hors taxe et sa catégorie.

``` C
#include <stdio.h>  
  
int main() {  
  
    float prixHT, prixTTC;  
    char categorie;  
  
    debut:  
    printf("Veuillez entrer le prix hors taxe de votre produit : \n");  
    scanf("%f", &prixHT);  
  
    printf("Veuillez entrer la categorie de TVA de votre produit : \n");  
    scanf(" %c", &categorie);  
  
    if(prixHT > 0 && (categorie == 'a' || categorie == 'A' || categorie == 'b' || categorie == 'B' || categorie == 'c' || categorie == 'C') ){  
  
        switch(categorie){  
            case 'a':  
            case 'A':  
                prixTTC = prixHT * 1.07;  
  
                printf("Prix HT : %.2f euros\n", prixHT);  
                printf("Categorie : %c\n", categorie);  
                printf("Prix TTC : %.2f euros\n", prixTTC);  
                break;  
            case 'b':  
            case 'B':  
                prixTTC = prixHT * 1.20;  
  
                printf("Prix HT : %.2f euros\n", prixHT);  
                printf("Categorie : %c\n", categorie);  
                printf("Prix TTC : %.2f euros\n", prixTTC);  
                break;  
            case 'c':  
            case 'C':  
                prixTTC = prixHT * 1.25;  
  
                printf("Prix HT : %.2f euros\n", prixHT);  
                printf("Categorie : %c\n", categorie);  
                printf("Prix TTC : %.2f euros\n", prixTTC);  
                break;  
            default:  
                printf("Erreur !\n\n");  
        }  
    }  
    else{  
        printf("Vous devez rentrer un prix correct !\n");  
        printf("Vous devez rentrer une categorie qui correspond a 'A' ou 'B' ou 'C' !\n\n");  
  
        goto debut;  
    }  
  
  
    return 0;  
}
```


# Exercice #20

Rédiger un programme qui demande deux nombres entiers et l'un des opérateurs suivant : +, -, \*, / puis effectue l'opération correspond et affiche le résultat de cette opération. 

``` C
#include <stdio.h>  
  
int main() {  
  
    int A, B, calcul;  
    char operateur;  
  
    debut:  
    printf("Veuillez saisir votre 1er nombre entier : \n");  
    scanf("%d", &A);  
  
    printf("Veuillez saisir un operateur (+, -, *, /) : \n");  
    scanf(" %c", &operateur);  
  
    printf("Veuillez saisir votre 2eme nombre : \n");  
    scanf("%d", &B);  
  
  
    switch(operateur){  
        case '+':  
            calcul = A + B;  
            printf("%d %c %d = %d", A, operateur, B, calcul);  
            break;  
        case '-':  
            calcul = A - B;  
            printf("%d %c %d = %d", A, operateur, B, calcul);  
            break;  
        case '*':  
            calcul = A * B;  
            printf("%d %c %d = %d", A, operateur, B, calcul);  
            break;  
        case '/':  
            if(B != 0){  
                calcul = A / B;  
                printf("%d %c %d = %d", A, operateur, B, calcul);  
            }  
            else{  
                printf("La division par 0 est impossible");  
            }  
  
            break;  
        default:  
            printf("Erreur !, L'opérateur est incorrect\n\n");  
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
  
    int nb;  
  
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
  
    if( ( annee % 4 == 0 && annee % 100 != 0 ) || (annee % 400 == 0) )  
        printf("%d est une annee bissextile.\n\n");  
    else  
        printf("%d est une annee non bissextile.\n\n");  
  
  
  
  
    return 0;  
}
```
