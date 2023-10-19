// Inclusion de la bibliothèque standard d'entrées/sorties (stdio.h)
#include <stdio.h>

// Point d'entrée du programme.
int main() {
    // Déclaration d'une variable pour stocker l'entier saisi par l'utilisateur.
    int nombre;
    
    // Affiche une invite demandant à l'utilisateur de saisir un nombre.
    printf("Entrez un entier strictement supérieur à 10 : ");
    // Lit la saisie de l'utilisateur et l'affecte à la variable 'nombre'.
    scanf("%d", &nombre);
    
    // Vérifie SI le nombre saisi est strictement supérieur à 10.
    if (nombre > 10) {
        // Si c'est le cas, affiche que le nombre est supérieur à 10.
        printf("Le nombre est supérieur à 10.\n");
        return 0; // Retourne 0 pour indiquer que le programme s'est terminé normalement.
    } else {
        // Si le nombre n'est pas supérieur à 10, affiche qu'il est inférieur ou égal à 10.
        printf("Le nombre est inférieur ou égal à 10.\n");
        return 1; // Retourne 1 pour indiquer que la condition souhaitée (nombre > 10) n'a pas été respectée dans notre programme.
    }
}