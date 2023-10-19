### Chapitre 2 : Variables et Types de Données en C

Dans ce chapitre, nous allons revisiter les concepts de base des variables et des types de données en langage C. Il est essentiel de comprendre ces bases avant de passer à des concepts plus avancés.

#### 2.1. Variables et Types de Données Fondamentaux

Commençons par les éléments de base :

##### Variables

Les variables sont des emplacements de mémoire destinés à stocker des données. En C, vous devez déclarer une variable avant de l'utiliser. Voici comment déclarer et utiliser des variables avec différents types de données :

- **Entier (int)** : Les variables de type `int` sont utilisées pour stocker des nombres entiers.

  ```c
  int age; // Déclaration d'une variable de type entier nommée "age"
  age = 25; // Affectation d'une valeur à la variable "age"
  ```

- **Nombre à Virgule Flottante (float)** : Les variables de type `float` sont utilisées pour stocker des nombres à virgule flottante.

  ```c
  float prix; // Déclaration d'une variable de type float nommée "prix"
  prix = 19.99; // Affectation d'une valeur à la variable "prix"
  ```

- **Caractère (char)** : Les variables de type `char` sont utilisées pour stocker des caractères.

  ```c
  char lettre; // Déclaration d'une variable de type char nommée "lettre"
  lettre = 'A'; // Affectation d'une valeur à la variable "lettre"
  ```

##### Types de Données Additionnels

En plus des types de données fondamentaux, il existe d'autres types de données que vous pouvez utiliser en C :

- **Non Signé (unsigned)** : Les types non signés, tels que `unsigned int`, sont utilisés pour stocker des nombres positifs ou nuls. Ils n'ont pas de signe (positif ou négatif).

  ```c
  unsigned int nombrePositif; // Déclaration d'une variable non signée
  nombrePositif = 100; // Affectation d'une valeur positive
  ```

- **Long (long)** : Les types longs, tels que `long int`, permettent de stocker des nombres entiers plus longs que les types `int`.

  ```c
  long int numeroLong; // Déclaration d'une variable de type long
  numeroLong = 1000000000; // Affectation d'une valeur longue
  ```

- **Double (double)** : Les types `double` sont utilisés pour stocker des nombres à virgule flottante avec une précision accrue par rapport à `float`.

  ```c
  double precision; // Déclaration d'une variable de type double
  precision = 3.14159265359; // Affectation d'une valeur double
  ```

En comprenant ces concepts de base avec des exemples concrets, vous serez mieux préparé pour la suite de ce chapitre où nous explorerons d'autres concepts avancés. N'hésitez pas à poser des questions ou à demander des clarifications à tout moment.

### Affichage

| Spécificateur de Format | Type de Donnée  | Exemple (printf)             | Description                   |
|-------------------------|-----------------|------------------------------|--------------------------------|
| `%d`                    | Entier          | `printf("%d", entier);`     | Entier décimal. L'affichage peut être aligné à droite avec une largeur de champ spécifiée, par exemple, `%5d`. |
| `%ld`                   | Long Entier     | `printf("%ld", longEntier);` | Long entier décimal. Utilisé pour les entiers plus longs. |
| `%u`                    | Entier Non Signé | `printf("%u", entierNonSigne);` | Entier non signé. Utilisé pour des nombres positifs. |
| `%f`                    | Flottant        | `printf("%f", nombreFlottant);` | Flottant (6 décimales par défaut). Peut spécifier la précision, par exemple, `%.2f` pour 2 décimales. |
| `%lf`                   | Double Flottant | `printf("%lf", doubleFlottant);` | Double flottant (15 décimales par défaut). Peut spécifier la précision, par exemple, `%.3lf` pour 3 décimales. |
| `%c`                    | Caractère       | `printf("%c", caractere);`   | Caractère. Affiche un seul caractère. |

#### Affichage de Plusieurs Valeurs avec `printf`

Vous pouvez afficher plusieurs valeurs en utilisant `printf` en fournissant plusieurs spécificateurs de format dans la chaîne de format, puis en fournissant les valeurs correspondantes séparées par des virgules.

Exemple :

```c
int age = 25;
float taille = 1.75;
printf("Âge : %d ans, Taille : %.2f mètres\n", age, taille);
```

### Lecture de Valeurs avec `scanf`

`scanf` est utilisé pour lire des valeurs depuis l'entrée utilisateur en fonction des spécificateurs de format fournis dans la chaîne de format. Les valeurs lues sont stockées dans les variables correspondantes.

Exemple :

```c
int age;
float taille;
printf("Entrez votre âge : ");
scanf("%d", &age);
printf("Entrez votre taille en mètres : ");
scanf("%f", &taille);
```

#### Bonus avancé : Apprenons en plus sur la fonction `scanf`

#### Passage par Valeur en C

Le passage par valeur en C consiste à transmettre une copie de la valeur d'une variable à une fonction. Les modifications apportées à la variable dans la fonction n'affectent pas la variable d'origine.

Exemple :

```c
#include <stdio.h>

// Fonction qui utilise le passage par valeur
int addition(int a, int b) {
    return a + b; // La fonction renvoie la somme de a et b
}

int main() {
    int x = 5;
    int y = 7;

    // Appel de la fonction avec les valeurs de x et y
    int resultat = addition(x, y);

    printf("Résultat : %d\n", resultat); // Affiche la somme de x et y
    printf("x : %d, y : %d\n", x, y);     // x et y restent inchangés

    return 0;
}
```

Dans cet exemple, la fonction `addition` prend deux valeurs `a` et `b` en argument. Ces valeurs sont des copies des variables `x` et `y` que nous utilisons pour appeler la fonction. La fonction renvoie la somme de ces valeurs, mais les modifications apportées à `a` et `b` dans la fonction n'affectent pas les variables d'origine `x` et `y`.

Le résultat affiché sera :

```
Résultat : 12
x : 5, y : 7
```

Les valeurs de `x` et `y` restent inchangées après l'appel de la fonction.

Le passage par valeur est la méthode par défaut en C pour transmettre des arguments à une fonction. Il est approprié lorsque vous ne souhaitez pas modifier les valeurs d'origine.

#### Adresses Mémoire en C

En C, une adresse mémoire est un emplacement unique dans la mémoire de l'ordinateur où une valeur spécifique est stockée. Chaque variable et chaque élément de données a une adresse mémoire associée qui permet au programme de les localiser et de les manipuler.

Les adresses mémoire sont généralement représentées sous forme d'entiers hexadécimaux (par exemple, `0x7ffdb2c0623c`). Chaque adresse correspond à un emplacement spécifique dans la mémoire de l'ordinateur, et elle est unique pour chaque variable ou objet.

Lorsque vous déclarez une variable en C, le compilateur alloue automatiquement un espace dans la mémoire de l'ordinateur pour stocker cette variable. Vous pouvez obtenir l'adresse mémoire d'une variable à l'aide de l'opérateur `&`. Par exemple, `&nombre` renvoie l'adresse mémoire de la variable `nombre`.

Les adresses mémoire sont essentielles pour les pointeurs en C, car elles permettent de localiser et d'accéder aux données stockées dans la mémoire. Les pointeurs contiennent généralement des adresses mémoire et sont utilisés pour accéder aux valeurs à ces emplacements.

En résumé, une adresse mémoire en C est l'emplacement précis où une valeur est stockée dans la mémoire de l'ordinateur. Elle est représentée sous forme d'entier hexadécimal et est essentielle pour la manipulation des données à travers les pointeurs.


#### Pointeurs en C

Un pointeur est une variable qui contient l'adresse mémoire d'une autre variable. En C, les pointeurs sont utilisés pour effectuer des opérations avancées telles que le passage par référence, la gestion dynamique de la mémoire et la manipulation d'adresses.

Exemple :

```c
#include <stdio.h>

int main() {
    int nombre = 42; // Déclaration d'une variable
    int *pointeur;   // Déclaration d'un pointeur

    pointeur = &nombre; // Initialisation du pointeur avec l'adresse de 'nombre'

    printf("Valeur de nombre : %d\n", nombre);
    printf("Adresse de nombre : %p\n", &nombre);
    printf("Valeur via le pointeur : %d\n", *pointeur); // Utilisation du pointeur pour accéder à 'nombre'
    
    return 0;
}
```

Dans cet exemple, nous déclarons un pointeur `pointeur` qui peut contenir l'adresse d'une variable de type `int`. Ensuite, nous initialisons ce pointeur avec l'adresse de la variable `nombre` à l'aide de l'opérateur `&`. En utilisant `*pointeur`, nous pouvons accéder à la valeur de `nombre` en utilisant le pointeur.

Le résultat affiché sera quelque chose comme :

```
Valeur de nombre : 42
Adresse de nombre : 0x7ffdb2c0623c
Valeur via le pointeur : 42
```

Les pointeurs sont des éléments essentiels en C pour la gestion de la mémoire et la manipulation d'adresses. Ils sont utilisés pour effectuer des opérations avancées telles que le passage par référence et l'allocation dynamique de mémoire.


#### Passage par Référence en C

Le passage par référence en C permet de modifier directement une variable depuis une fonction en passant un pointeur vers cette variable comme argument. Cela permet à la fonction de manipuler la variable d'origine.

Exemple :

```c
#include <stdio.h>

// Fonction qui modifie une variable en utilisant le passage par référence
void modifierValeur(int *x) {
    *x = 42; // Modification de la valeur pointée par x
}

int main() {
    int nombre = 10;
    printf("Avant la modification : %d\n", nombre);

    // Appel de la fonction avec un pointeur vers la variable
    modifierValeur(&nombre);

    printf("Après la modification : %d\n", nombre);

    return 0;
}
```

Dans cet exemple, la fonction `modifierValeur` prend un pointeur `int *x` comme argument, ce qui signifie qu'elle peut modifier la valeur de la variable pointée par `x` en utilisant `*x`. Lorsque nous appelons `modifierValeur(&nombre)`, nous passons un pointeur vers la variable `nombre`, ce qui permet à la fonction de modifier la valeur de `nombre` directement.

Le résultat affiché sera :

```
Avant la modification : 10
Après la modification : 42
```

La valeur de `nombre` a été modifiée grâce au passage par référence.

Le passage par référence est utile lorsque vous souhaitez que des fonctions modifient les valeurs de variables en dehors de leur propre portée.

#### Fonction `scanf` en C

La fonction `scanf` en C est utilisée pour lire des valeurs depuis l'entrée standard (généralement le clavier) et les stocker dans des variables. Elle est couramment utilisée pour obtenir des données entrées par l'utilisateur.

La fonction `scanf` prend deux arguments principaux :

1. **Le premier argument** est une chaîne de caractères formatée qui spécifie explicitement le format attendu des données d'entrée. Cette chaîne de format doit contenir des spécificateurs de format tels que `%d` pour les entiers, `%f` pour les nombres flottants, `%c` pour les caractères, etc. Ces spécificateurs de format indiquent comment `scanf` doit interpréter les données entrées.

2. **Le deuxième argument** est une variable dans laquelle la donnée lue sera stockée. Vous devez fournir une variable appropriée qui correspond au spécificateur de format dans la chaîne de format. Par exemple, si la chaîne de format contient `%d`, alors vous devez fournir une variable de type `int` pour stocker la valeur lue. Dans le cas de `scanf`, l'utilisation de l'opérateur `&` (et commercial) est nécessaire pour passer l'adresse de la variable. Cela permet à `scanf` d'effectuer un passage par référence, modifiant ainsi directement la variable d'origine. C'est pourquoi vous verrez `&` utilisé avec `scanf`.

Exemple :

```c
#include <stdio.h>

int main() {
    int entier;
    float nombreFlottant;

    // Utilisation de scanf pour lire un entier et un nombre flottant
    printf("Entrez un entier : ");
    scanf("%d", &entier); // Lire un entier et le stocker dans 'entier'

    printf("Entrez un nombre flottant : ");
    scanf("%f", &nombreFlottant); // Lire un nombre flottant et le stocker dans 'nombreFlottant'

    // Afficher les valeurs lues
    printf("Vous avez entré : %d (entier) et %.2f (nombre flottant)\n", entier, nombreFlottant);
    
    return 0;
}
```

Dans cet exemple, nous utilisons `scanf` pour lire un entier et un nombre flottant depuis l'entrée standard. La chaîne de format utilise explicitement `%d` et `%f` pour indiquer le format attendu des données. Les données lues sont stockées dans les variables `entier` et `nombreFlottant` en utilisant `&` pour indiquer l'adresse de ces variables.

Le passage par référence, avec l'utilisation de `&`, permet à `scanf` de modifier directement les variables `entier` et `nombreFlottant` avec les valeurs lues depuis l'entrée standard.

Si vous souhaitez un exemple avec une liste de variables, voici un exemple :

```c
#include <stdio.h>

int main() {
    int entier;
    float nombreFlottant;
    char caractere;
    
    // Utilisation de scanf pour lire différentes données
    printf("Entrez un entier, un nombre flottant et un caractère : ");
    scanf("%d %f %c", &entier, &nombreFlottant, &caractere); // Lire un entier, un nombre flottant et un caractère

    // Afficher les valeurs lues
    printf("Vous avez entré : %d (entier), %.2f (nombre flottant), et %c (caractère)\n", entier, nombreFlottant, caractere);
    
    return 0;
}
```

Dans cet exemple, la chaîne de format `"%d %f %c"` indique que `scanf` attend un entier, un nombre flottant et un caractère, chacun séparé par des espaces, depuis l'entrée standard. Les données lues sont stockées dans les variables `entier`, `nombreFlottant` et `caractere`, respectivement.

La fonction `scanf` est un outil essentiel et instructif qui ouvre la porte à l'interaction avec l'utilisateur et à la lecture de données depuis le clavier. Vous avez franchi avec succès les premières étapes de votre voyage dans le monde de la programmation en C. Continuez ainsi, et les horizons de la programmation s'ouvriront devant vous !