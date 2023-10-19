#include <stdio.h>

int main() {
    int nombre;
    
    printf("Entrez un entier : ");
    scanf("%d", &nombre);
    
    if (nombre > 10) {
        printf("Le nombre est supérieur à 10.\n");
        return 0; // Terminaison normale
    } else {
        printf("Le nombre est inférieur ou égal à 10.\n");
        return 1; // Erreur
    }
}