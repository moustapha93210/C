
# Exercice #91

Écrire un programme en C qui permet de saisir et afficher une chaîne de caractère.

``` C
#include <stdio.h>  
  
int main(){  
  
    char c[10];  
    int i;  
  
    /*  
     * Manière 1 ( Classique )    printf("Veuillez saisir une chaine : \n");  
    for(i = 0; i < 10; i++)        scanf(" %c", &c[i]);  
    for(i = 0; i < 10; i++)        scanf(" %c", &c[i]);
    */      
    
    
    /*
     * Méthode 2 ( ne prend pas en charge les espaces )
    printf("Veuillez saisir une chaine : \n");    scanf("%s", c);  
    printf("%s", c);
    */


    // Méthode 3
    printf("Veuillez saisir une chaine : \n");  
    gets(c);  
  
    puts(c);  
  
  
  
  
    return 0;  
}
```

# Exercice #92

Écrire un programme en C qui calcule la distance de Hamming entre deux mots entrés par l'utilisateur.
**NB** : La distance de Hamming entre deux mots de même longueur est le nombre d'endroits où les lettres sont différentes.
Par

``` C
#include <stdio.h>  
#include <string.h>  
  
int main(){  
  
    char mot1[100];  
    char mot2[100];  
    int n = 0;  
  
    // Saisie de mot1  
    puts("Veuillez saisir votre premier mots :");  
    gets(mot1);  
  
    // Saisie de mot2  
    puts("Veuillez saisir votre deuxieme mot :");  
    gets(mot2);  
  
    n = 0;  
  
    // Gestions des erreurs  
    if(strlen(mot1) != strlen(mot2) )  
        printf("Les deux mots n'ont pas la meme longueur\n");  
    else{  
  
        // Parcours du tableau pour savoir la distance de Hammin entre mot1 et mot2  
        for(int i = 0; i < strlen(mot1); i++){  
  
            if(mot1[i] != mot2[i])  
                n++;  
  
        }  
  
        printf("La distance de Hamming entre les deux mot est : %d\n", n);  
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
  
    char mot[20];  
  
    // Saisie du mot par l'utilisateur  
    puts("Veuillez entrer un mot :");  
    gets(mot);  
  
    int i, n;  
  
    n = 0;  
  
    for(i = 0; mot[i] != '\0' ; i++)  
        n++;  
  
  
    printf("La taille de la chaine est : %d\n", n);  
    printf("La taille de la chaine est : %d", strlen(mot) );  
  
  
  
  
    return 0;  
}
```

# Exercice #94

Écrire un programme qui détermine le caractère qui se répète le plus dans une chaîne.

``` C
#include <stdio.h>  
#include <string.h>  
  
int main(){  
  
    char T[20];  
    int Frq[20];  
    int max;  
    int i, j, compteur;  
  
    // Saisi et lecture de la chaine de caractère  
    puts("Veuillez saisir une chaine :");  
    gets(T);  
  
  
    // On attribue au tableau Frq -1 à toutes ses cases  
    for(i = 0; i < 20; i++)  
        Frq[i] = -1;  
  
  
  
    // Boucle pour connaitre quel caractère du tableau T à le plus de fréquence  
    for(i = 0; i < strlen(T); i++){  
  
        compteur = 1;  
  
        for(j = i + 1; j < strlen(T); j++){  
  
            if(T[i] == T[j]){  
  
                compteur++;  
                Frq[j] = 0;  
  
            }  
        }  
  
        if(Frq[i] != 0)  
            Frq[i] = compteur;  
    }  
  
  
  
    // Affichage du caractère qui s'affiche le plus  
    max = 0;  
  
    for(i = 0; i < strlen(T); i++){  
  
        if( Frq[i] > Frq[max] )  
            max = i;  
    }  
  
    printf("\nLe caractere qui se repete le plus est '%c' = %d", T[max], Frq[max]);  
  
  
  
  
    return 0;  
}
```

# Exercice #95

Écrire un programme qui affiche les caractères d'un chaîne dans l'ordre inverse.

``` C
#include <stdio.h>  
#include <string.h>  
  
int main(){  
  
    char M[20];  
    int i, j;  
  
  
    // Saisie et lecture du mot choisi par l'utilisateur  
    printf("Veuillez saisir la chaine : \n");  
    gets(M);  
  
    //for(i = strlen(M) - 1; i >= 0 ; i--)  
        //printf("%c ", M[i]);
        
    puts(strrev(M) );  
  
  
  
  
    return 0;  
}
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
