#include <stdio.h>

int main() {
    // Déclaration des variables
    int nombre1, nombre2, somme;

    // Lecture des nombres depuis l'utilisateur
    printf("Entrez le premier nombre : ");
    scanf("%d", &nombre1);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &nombre2);

    // Calcul de la somme
    somme = nombre1 + nombre2;

    // Affichage du résultat
    printf("La somme de %d et %d est : %d\n", nombre1, nombre2, somme);

    return 0;
}