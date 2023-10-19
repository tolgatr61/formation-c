#include <stdio.h>

int main() {
    // Déclaration des variables
    double nombre1, nombre2, somme;

    // Lecture des nombres depuis l'utilisateur
    printf("Entrez le premier nombre : ");
    scanf("%lf", &nombre1);

    printf("Entrez le deuxième nombre : ");
    scanf("%lf", &nombre2);

    // Calcul de la somme
    somme = nombre1 + nombre2;

    // Affichage du résultat
    printf("La somme de %.2lf et %.2lf est : %.2lf\n", nombre1, nombre2, somme);

    return 0;
}