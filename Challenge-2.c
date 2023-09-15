#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    printf("Entrez la température en Fahrenheit : ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) / 1.8;

    if (celsius <=0 ) {
        printf("tres froid");
    } else if (celsius >0 &&celsius <=20 ) {
        printf(" froid");
    } else if (celsius>20 && celsius <=40) {
        printf("chaud");
    } else {
        printf("tres chaud");
    }

    printf("%.2f degres Fahrenheit equivaut à %.2f degrés Celsius, ce qui est considere %s.\n", fahrenheit, celsius);

    return 0;
}
