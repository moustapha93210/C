
# Exercice #91

Écrire un programme en C qui permet de saisir et afficher une chaîne de caractère.

``` C
#include <stdio.h>  
  
int main(){  
  
    char c[10];  
  
  
    printf("Veuillez entrer un mot : \n");  
    gets(c);  
  
    puts(c);  
  
  
  
  
  
    return 0;  
}
```

# Exercice #92

Écrire un programme en C qui calcule la distance de Hamming entre deux mots entrés par l'utilisateur.
**NB** : La distance de Hamming entre deux mots de même longueur est le nombre d'endroits où les lettres sont différentes.
Par exemple : JAPON - SAVON

``` C
#include <stdio.h>  
#include <string.h>  
  
int main(){  
  
    char M1[100];  
    char M2[100];  
    int i, j, n;  
  
    // Saisie de M1  
    printf("Veuillez saisir votre premier mots : \n");  
    gets(M1);  
  
    // Saisie de M2  
    printf("Veuillez saisir votre deuxieme mot : \n");  
    gets(M2);  
  
    n = 0;  
  
    // Gestions des erreurs  
    if( strlen(M1) != strlen(M2) )  
        printf("Erreur ! Il faut que les 2 mots soient de la meme taille.\n");  
    else{  
  
        // Parcours du tableau pour savoir la distance de Hammin entre M1 et M2  
        for(i = 0; i < strlen(M1); i++){  
  
            if(M1[i] != M2[i])  
                n++;  
  
        }  
  
        printf("La distance de Hammin entre M1 et M2 est de : %d\n", n);  
    }  
  
  
  
  
    return 0;  
}
```

# Exercice #93

Écrire un programme C pour trouver la longueur d'une chaîne de caractères sans utiliser la fonction strlen()

``` C
#include <stdio.h>  
#include <string.h>  
  
  
  
int main(){  
  
    char C[100];  
    int i, n;  
  
  
    // Saisie du mot par l'utilisateur  
    puts("Veuillez entrer un mot :");  
    gets(C);  
  
    n = 0;  
  
    for(i = 0; C[i] != '\0' ; i++){  
  
            n++;  
  
        printf("i = %d\n", i);  
        printf("C[%d] = %c\n\n", i, C[i]);  
  
    }  
  
    printf("Taille : %d\n", n);  
    printf("Taille avec la fonction 'strlen()' : %d", strlen(C) );  
  
  
  
  
    return 0;  
}
```

# Exercice #94

Écrire un programme qui détermine le caractère qui se répète le plus dans une chaîne.

``` C
#include <stdio.h>  
#include <string.h>  
  
int main(){  
  
    char mot[100];  
    int Frq[100];  
    int max;  
    int i, j, cmptr;  
  
    // Saisi et lecture de la chaine de caractère  
    puts("Veuillez saisir une chaine de caractere :");  
    gets(mot);  
  
    int length = strlen(mot);  
  
    // On attribue au tableau Frq -1 à toutes ses cases  
    for(i = 0; i < length; i++){  
  
        Frq[i] = -1;  
  
        printf("Frq[%d] = -1\n", i);  
  
    }  
  
  
    // Boucle pour connaitre quel caractère du tableau mot à le plus de fréquence  
    for(i = 0; mot[i] != '\0'; i++){  
  
        cmptr = 1;  
  
        for(j = i + 1; j < mot[j] != '\0'; j++){  
  
            if(mot[i] == mot[j]){  
  
                cmptr++;  
                Frq[j] = 0;  
  
            }  
  
        }  
  
        if(Frq[i] != 0)  
            Frq[i] = cmptr;  
  
    }  
  
  
    // Affichage du tableau Frq  
    printf("\nFrq apres le tri\n");  
  
    for(i = 0; i < strlen(mot); i++)  
        printf("Frq[%d] = %d = %c\n", i, Frq[i], mot[i] );  
  
  
    // Affichage du caractère qui s'affiche le plus  
    max = 0;  
  
    for(i = 0; i < strlen(mot); i++){  
  
        if( Frq[i] > Frq[max] )  
            max = i;  
    }  
  
    printf("\nLe caractere qui se repete le plus est '%c'", mot[max]);  
  
  
  
  
    return 0;  
}
```

# Exercice #95

``` C

```

# Exercice #96

``` C

```

# Exercice #97

``` C

```

# Exercice #98

``` C

```

# Exercice #99

``` C

```

# Exercice #100

``` C

```
