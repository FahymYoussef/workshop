#include <stdio.h>

int main() {
    int tableau[10];
    int i;

    for (i = 0; i < 10; i++) {
        tableau[i] = i + 1;
    }

    for (i = 0; i < 10; i++) {
        printf("%d \n", tableau[i]);

        }


    return 0;
}
