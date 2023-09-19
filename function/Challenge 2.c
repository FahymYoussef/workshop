#include <stdio.h>

// Function to calculate GCD using recursion
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int a, b;

    // Input two non-zero integers
    printf("Enter the first integer (a > 0): ");
    scanf("%d", &a);
    printf("Enter the second integer (b > 0): ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Both integers should be greater than 0.\n");
    } else {
        // Ensure a > b, if not, swap them
        if (a < b) {

        }

        int result = gcd(a, b);
        printf("The GCD of %d and %d is %d\n", a, b, result);
    }

    return 0;
}
