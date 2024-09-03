
# Fonction

## Qu'est-ce qu'une fonction ?

Une fonction est **une suite d'instructions** regroupées sous un nom; elle prend en entrée des **paramètres** (**arguments**) et retourne un **résultat**.
Une fonction est **écrite séparément** du corps de programme principal (main) et sera **appelée** par celui-ci lorsque cela sera nécessaire.


# Déclaration de la fonction

Il existe 4 manières de déclarer une fonctions.

Voici l'une d'elle :
``` C
type_retour nom_fonction(type arg1, type arg2, ...) {
	
	Instruction 1;
	Instruction 2;
	Instruction 3;
	...;
	return resultat;
	
}
```

`type_retour` = Type de résultat retourné

`nom_fonction` = Nom de fonction

`(type arg1, type arg2, ...)` = Arguments de fonction

`Instruction 1, 2, 3 ...` = Traitement

`resultat` = Résultat retourné


## Types de fonctions

#### Pas de retour et pas d'arguments
``` C
void nom_fonction(){

     Instructions;

} 
```

#### Pas de retour et avec arguments
``` C
void nom_fonction(type arg1, ... ){

	Instructions;

}
```


#### Avec retour et pas d'arguments
``` C
type_retour nom_fonction(){

	Instructions;
	return resultat;

}
```

#### Avec retour et avec arguments
``` C
type_retour nom_fonction(type arg1, ... ){

	Instructions;
	return resultat;

}
```


## Exemple : Fonction Puissance

#### Pas de retour et avec arguments

``` C
void puissance(int N){
	
	int P;
	P = N * N;

	printf("La puissance de %d est : %d", N, P);
}
```


#### Avec retour et avec arguments

``` C
int puissance(int N){

	int P;
	P = N * N;

	return P;
}
```



# Appel de fonctions

Il existe 4 manières d'appeler une fonctions.

## Types de fonctions

#### Pas de retour et pas d'arguments
``` C
nom_fun();
```

#### Pas de retour et avec arguments
``` C
nom_fun(arg1, arg2, ... );
```


#### Avec retour et pas d'arguments
``` C
x = nom_fun();

// OU

x = y / nom_fun()

// OU

printf(nom_func());
```

#### Avec retour et avec arguments
``` C
x = nom_fun(arg1, arg2, ... );

// OU

x = y / nom_fun(arg1, arg2, ... );

// OU

printf(nom_func(arg1, arg2, ... ));
```



## Exemple : Fonction Puissance

#### Sans retour et avec arguments
``` C
#include <stdio.h>

void puissance(int N){
	
	int P;
	P = N * N;

	printf("La puissance de %d est : %d", N, P);
}

int main(){

	int N;
	
	printf("Veuillez saisir la valeur de N : ");
	scanf("%d", &N);

	puissance(N);
	
	
	return 0;

}
```

Dans cette exemple on appel la fonction puissance avec comme argument `N`.
`puissance(N);`


#### Avec retour et avec arguments
``` C
#include <stdio.h>

int puissance(int N){
	
	int P;
	P = N * N;

	return P;
}

int main(){

	int N;
	
	printf("Veuillez saisir la valeur de N : ");
	scanf("%d", &N);

	P = puissance(N);

	printf("La puissance de %d est de : %d", N, P);
	
	
	return 0;

}
```

Dans cette exemple on appel la fonction puissance et on l'affecte à une variable.
`P = puissance(N);`
`printf("La puissance de %d est de : %d", N, P);`




# Déclaration locale VS Déclaration globale

Une variable peut être **déclarée localement** dans la fonction qui l'appelle. Elle est alors **disponible à l'intérieur de cette fonction**.

Une variable peut être **déclarée globalement** au  début du programme (derrière les instructions `#include`). Elle est alors **disponible à toutes les fonctions du programme**.

## Variable locale

Les variables `P` et `N` sont des variables locales. Elles sont déclaré à l'intérieur de la fonction puissance et main. Il n'y a aucune relation entre les les 2 chacune est utilisés dans une fonction indépendante de l'autre.

``` C
#include <stdio.h>

int puissance(int N){
	
	int P;
	P = N * N;

	return P;
}

int main(){

	int N;
	
	printf("Veuillez saisir la valeur de N : ");
	scanf("%d", &N);

	P = puissance(N);

	printf("La puissance de %d est de : %d", N, P);
	
	
	return 0;

}
```


## Variable globale

La variable `N` est une variable globale. Elle est alors disponible à la fonction `puissance` et `main`

``` C
#include <stdio.h>

int N;

int puissance(int N){
	
	int P;
	P = N * N;

	return P;
}

int main(){

	int N;
	
	printf("Veuillez saisir la valeur de N : ");
	scanf("%d", &N);

	P = puissance(N);

	printf("La puissance de %d est de : %d", N, P);
	
	
	return 0;

}
```



#### Exercice : Fonctions - variables locales

Écrire un programme qui demande à l'utilisateur de saisir les valeurs de deux variables A et B (locales). Ensuite, il permet de définir et d'appeler les fonctions suivantes :

- Une fonction qui retourne si les valeurs de A et B sont de même signe ou non. (*Une fonction sans valeur de retour et avec arguments*)

- Une fonction qui renvoie le minimum de A et B. (*Une fonction avec valeur de retour et avec arguments*)

- Une fonction qui renvoie le maximum de A et B. (*Une fonction avec une valeur de retour et avec arguments)

``` C
#include <stdio.h>  
  
void signe(int A, int B){  
  
    if(A * B > 0)  
        printf("Les valeurs de A et B ont le meme signe.\n");  
    else  
        printf("Les valeurs de A et B ont deux signes differents.\n");  
}  
  
int minimum(int A, int B){  
  
    int min;  
    if(A > B)  
        min = B;  
    else  
        min = A;  
  
    return min;  
}  
  
int maximum(int A, int B){  
  
    if(A > B)  
        return A;  
    else  
        return B;  
}  
  
  
int main(){  
  
    int A, B;  
    int min;  
  
    printf("Veuillez saisir la valeur de A : ");  
    scanf("%d", &A);  
  
    printf("Veuillez saisir la valeur de B : ");  
    scanf("%d", &B);  
  
    signe(A, B);  
  
    min = minimum(A, B);  
    printf("La valeur minimale est : %d \n", min);  
  
    printf("La valeur maximale est : %d \n", maximum(A, B));  
  
  
    return 0;  
}
```


#### Exercice : Fonctions - variables globales

Écrire un programme qui demande à l'utilisateur de saisir les valeurs de deux variables A et B (locales). Ensuite, il permet de définir et d'appeler les mêmes fonctions que l'exercice précédent.

``` C

```