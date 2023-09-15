#include <stdio.h>

int main() {
    float num1, num2, num3, num4;
    float somme, moyenne;

    printf("Entrez le  premier  nombre  : ");
    scanf("%f", &num1);

    printf("Entrez le deuxième  nombre  : ");
    scanf("%f", &num2);

    printf("Entrez le troisieme nombre  : ");
    scanf("%f", &num3);

    printf("Entrez le quatrieme nombre  : ");
    scanf("%f", &num4);

    somme = num1 + num2 + num3 + num4;

    moyenne = somme / 4;

    printf("Somme des nombres : %.2f\n", somme);
    printf("Moyenne des nombres : %.2f\n", moyenne);

    return 0;
}
