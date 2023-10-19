# Chapitre 1 : Premiers Pas en C

## Introduction
Ce chapitre vous guidera à travers les premiers pas dans la programmation en langage C. Vous apprendrez comment créer un programme C simple et comment l'exécuter. À la fin de ce chapitre, vous serez capable d'écrire et de compiler votre premier programme C qui affiche "Hello World!" à l'écran.

## Prérequis
Avant de commencer, assurez-vous d'avoir un environnement de développement C configuré sur votre système. Vous aurez besoin d'un compilateur C, tel que GCC (GNU Compiler Collection), installé.

## Étape 1 : Écrire le Code
Ouvrez un éditeur de texte de votre choix (par exemple, le Bloc-notes sur Windows ou un éditeur de code tel que Visual Studio Code) et copiez le code suivant dans un nouveau fichier :

```c
// Inclusion de la bibliothèque standard d'entrées/sorties (stdio.h)
#include <stdio.h>

// Fonction d'exécution principale en C, par convention, retourne un entier avec le type int pour indiquer une sortie normale ou une sortie d'erreur
int main() {
    // Utilisation de la fonction printf() de la bibliothèque stdio.h
    printf("Hello World!\n");
    
    // Retourne 0 pour indiquer une sortie normale, 1 ou autres pour une sortie d'erreur
    return 0;
}
```

## Étape 2 : Enregistrer le Fichier
Enregistrez le fichier avec une extension ".c". Par exemple, vous pouvez le nommer "hello.c". Assurez-vous que le fichier est enregistré dans un emplacement de votre choix sur votre système.

## Étape 3 : Compiler le Programme
Ouvrez un terminal (invite de commande) et accédez au répertoire où vous avez enregistré le fichier "helloworld.c". Ensuite, compilez le programme en utilisant la commande suivante :

```bash
gcc -o helloworld helloworld.c
```

Dans cette commande, le paramètre -o permet de spécifier un argument pour le nom du fichier exécutable de sortie, ici 'helloworld'. Le deuxième argument est le chemin vers le fichier C que vous souhaitez compiler en fichier exécutable. Ainsi, cette commande générera un fichier exécutable nommé "helloworld" dans votre répertoire courant, basé sur le code du fichier 'helloworld.c'.

## Étape 4 : Exécuter le Programme

Une fois que vous avez compilé le code source en un fichier exécutable, ce fichier est entièrement indépendant du code source. C'est là tout l'avantage de la compilation. Vous pouvez maintenant l'exécuter comme n'importe quel autre exécutable.

Donc pour exécuter le programme, utilisez la commande suivante :

**Sur Windows :**

```bash
helloworld.exe ou ./helloworld avec PowerShell
```

**Sur macOS et Linux :**

```bash
./helloworld
```

Vous verrez la sortie "Hello World!" affichée à l'écran.

## Conclusion
Félicitations ! Vous avez réussi à écrire, compiler et exécuter votre premier programme en langage C. Ce programme simple affiche "Hello World!" à l'écran, marquant ainsi le début de votre voyage dans le monde de la programmation en C.

Dans les chapitres suivants, nous explorerons davantage les concepts du langage C et vous apprendrez à créer des programmes plus complexes.