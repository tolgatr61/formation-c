#include <stdio.h>

int main() {
    // Types entiers
    int entier = 42;
    short petitEntier = 32767;
    long longEntier = 1234567890;
    unsigned int entierNonSigne = 100;
    
    // Types à virgule flottante
    float nombreFlottant = 3.14159;
    double doubleFlottant = 2.71828;
    
    // Type caractère
    char caractere = 'A';
    
    // Affichage des valeurs
    printf("Types entiers :\n");
    printf("int : %d\n", entier);
    printf("short : %d\n", petitEntier);
    printf("long : %ld\n", longEntier);
    printf("unsigned int : %u\n", entierNonSigne);
    
    printf("\nTypes à virgule flottante :\n");
    printf("float : %f\n", nombreFlottant);
    printf("double : %lf\n", doubleFlottant);
    
    printf("\nType caractère :\n");
    printf("char : %c\n", caractere);
    
    return 0;
}