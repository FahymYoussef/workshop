#include <stdio.h>

int main() {
    int a, b;

    printf("Entrez deux entiers a et b : ");
    scanf("%d %d", &a, &b);

    if (b != 0) {

        printf("a + b = %d\n", a + b);
        printf("a - b = %d\n", a - b);
        printf("a * b = %d\n", a * b);
        printf("a / b = %.2f\n ", (float) a / b);
        printf("a %% b = %d\n", a % b);
    } else {
        printf("Erreur : Division par zéro n'est pas autorisée.\n");
    }

    return 0;
}
