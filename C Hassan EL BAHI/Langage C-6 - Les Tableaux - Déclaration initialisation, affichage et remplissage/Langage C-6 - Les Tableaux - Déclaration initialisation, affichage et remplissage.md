
## Activité : Programme note

``` C
#include <stdio.h>  
  
int main()  
{  
    float N1, N2, N3, N4;  
  
    printf("Donner la note de l'étudiant num 1 : ");  
    scanf("%f", &N1);  
  
    printf("Donner la note de l'étudiant num 1 : ");  
    scanf("%f", &N2);  
  
    printf("Donner la note de l'étudiant num 1 : ");  
    scanf("%f", &N3);  
  
    printf("Donner la note de l'étudiant num 1 : ");  
    scanf("%f", &N4);  
  
    return 0;  
}
```

# I - Définition

Un tableau est une **suite d'éléments** de **même type**. Il utilise plusieurs cases mémoire à l'aide d'un seul nom. Comme toutes les cases portent le même nom, elles se différencient par un indice.


# II - Déclarer un tableau

#### Syntaxe : 

``` C
Type nom_tab[Taille];
```

#### Exemple :

Déclaration d'un tableau nommé T composé de cinq éléments entier :
``` C
int T[5];
```

Le tableau est représenté schématiquement dans la mémoire comme suit :

|    T    |     |     |     |     |     |
| :-----: | :-: | :-: | :-: | :-: | :-: |
| Indices |  0  |  1  |  2  |  3  |  4  |

#### Déclaration d'un tableau spécificité

#### Syntaxe
``` C
Type nom_tab[Taille];


		_____________________________________________________________
nom_tab |___________|___________|___________|___________|___________|
		      0           1           2          ...      Taille - 1
```
Si l'on prend pour exemple un taille de 318 le dernier élément aura pour indice `317`

#### Déclaration de la Variable N de programme note :
``` C
float N[318];


  _____________________________________________________________
N |___________|___________|___________|___________|___________|
		0           1           2          ...         317
```



# III - Déclarer et initialiser un tableau

#### Syntaxe 1 :
``` C
Type nom_tab[N] = {val1, val2, ..., valn};
```

#### Syntaxe 2 :
``` C
Type nom_tab[] = {val1, val2, ..., valn};
```

#### Syntaxe 3 :
``` C
Type nom_tab[] = {};
```

#### Exemples :

``` C
int T1[5] = {3, 18, 47, 8, 362};
int T2[5] = {};
int T3[5] = {3, 18};
int T4[] = {3, 18, 47, 8, 362};
int T5[5] = {3, 18, 47, 8, 362, 9};
```

#### Tableau T1
``` C
int T1[5] = {3, 18, 47, 8, 362};
```

|   T1    |  3  | 18  | 47  |  8  | 362 |
| :-----: | :-: | :-: | :-: | :-: | :-: |
| Indices |  0  |  1  |  2  |  3  |  4  |

#### Tableau T2
``` C
int T2[5] = {};
```

|   T2    |  0  |  0  |  0  |  0  |  0  |
| :-----: | :-: | :-: | :-: | :-: | :-: |
| Indices |  0  |  1  |  2  |  3  |  4  |

#### Tableau T3
``` C
int T3[5] = {3, 18};
```

|   T3    |  3  | 18  |  0  |  0  |  0  |
| :-----: | :-: | :-: | :-: | :-: | :-: |
| Indices |  0  |  1  |  2  |  3  |  4  |

#### Tableau T4
``` C
int T4[] = {3, 18, 47, 8, 362};
```

|   T4    |  3  | 18  | 47  |  8  | 362 |
| :-----: | :-: | :-: | :-: | :-: | :-: |
| Indices |  0  |  1  |  2  |  3  |  4  |

#### Tableau T5
Pour T5 ce n'est pas possible car on a donné une taille de 5 éléments au tableau et on lui initialise 6 nombre d'éléments
``` C
int T5[5] = {3, 18, 47, 8, 362, 9};
```

|   T5    |  3  | 18  | 47  |  8  | 362 |  9  |
| :-----: | :-: | :-: | :-: | :-: | :-: | :-: |
| Indices |  0  |  1  |  2  |  3  |  4  |  5  |



# IV - Remplir un tableau

#### Syntaxe d'affectation :
``` C
nom_tab[indice] = Valeur;
```
`nom_tab` = nom du tableau

`[indice]` = l'indice du tableau à laquelle on veut affecter une valeur

`Valeur` = la valeur que l'on veut affecter au tableau

#### Exemple

Affectation des valeurs aux éléments du tableau T :
``` C
T[0] = 6;
T[1] = T[0] - 4;
T[2] = T[0] * T[1];
T[3] = 20;
T[4] = T[0] + T[1] + T[2] + T[3];
```

|    T    |  6  |  2  | 12  | 20  | 40  |
| :-----: | :-: | :-: | :-: | :-: | :-: |
| Indices |  0  |  1  |  2  |  3  |  4  |


#### Syntaxe de lecteur :
``` C
scanf("%...", &nom_tab[indice]);
```
`"%..."` = mettre l'indicateur de format de la variable

`&nom_tab[indice]` = l'adresse de l'indice de la case concernés

#### Exemple

Remplissage de tous les éléments du tableau T avec l'instruction scanf :
``` C
scanf("%d", &T[0]);
scanf("%d", &T[1]);
scanf("%d", &T[2]);
scanf("%d", &T[3]);
scanf("%d", &T[4]);

//OU

for(i = 0; i < 5; i++){

	scanf("%d", &T[i]);
	
}

```



# V - Afficher les éléments du tableau

#### Syntaxe écriture :
``` C
printf("%...", nom_tab[indice]);
```
`"%..."` = mettre l'indicateur de format de la variable

`nom_tab[indice]` = préciser l'indice de l'élément concernés dans le tableau

#### Exemple

Affichage des valeurs de tous les éléments du tableau T :
``` C
printf("%d", T[0]);
printf("%d", T[1]);
printf("%d", T[2]);
printf("%d", T[3]);
printf("%d", T[4]);

//OU

for(i = 0; i < 5; i++){

	printf("%d", T[i]);

}
```


###### Tableau N :

|    N    |     |     |     |     |     |
| :-----: | :-: | :-: | :-: | :-: | :-: |
| Indices |  0  |  1  |  2  | ... | 317 |

###### Affectation de la note 12 à l'étudiant num 1 :
``` C
N[0] = 12;
```

###### Utilisation de la lecture pour saisir la note de l'étudiant num 3 :
``` C
scanf("%f", &N[2]);
```

###### Affichage de la note du dernier étudiant de la liste :
``` C
printf("%f", &N[317]);
```



#### Tableaux - Exercice

Écrire un programme qui permet de demander à l'utilisateur de saisir les notes des étudiants (318 étudiants), puis le programme calcule et affiche la moyenne des notes.

``` C
#include <stdio.h>  
  
int main() {  
  
    int taille = 10;  
    float N[taille];  
    float S, M;  
    int i;  
  
    for (i = 0; i < taille; i++) {  
  
        printf("Donner la note de l'etudiant num %d : ", i + 1);  
        scanf("%f", &N[i]);  
  
    }  
  
    S = 0;  
  
    for (i = 0; i < taille; i++) {  
  
        S = S + N[i];  
  
    }  
  
    M = S / taille;  
  
    printf("La moyenne des notes est de : %.2f", M);  
  
    return 0;  
  
}  
```



