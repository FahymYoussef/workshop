#include <stdio.h>

int main() {
    int a, b;

    printf("Entrez deux entiers a et b : ");
    scanf("%d %d", &a, &b);

    if (b != 0) {

        printf("a + b = %d\n", a + b);
        printf("a - b = %d\n", a - b);
        printf("a * b = %d\n", a * b);
        printf("a / b = %.2lf\n", (double)a / b);
        printf("a %% b = %d\n", a % b);
    } else {
        printf("Erreur : Division par z�ro n'est pas autoris�e.\n");
    }

    return 0;
}
