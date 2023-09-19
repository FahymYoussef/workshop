#include <stdio.h>

int somme(int n1, int n2) {
    return n1 + n2;
}

int main() {
    int num1, num2, result;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    result = somme(num1, num2);
    printf("La somme de %d + %d = %d\n", num1, num2, result);
    return 0;
}


