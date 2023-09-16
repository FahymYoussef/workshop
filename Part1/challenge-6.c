#include <stdio.h>

int main() {
    float rayon,circonference;
    const double pi=3.1415926535;
    printf("entre le rayon");
    scanf("%f",& rayon);
    circonference= 2 * pi * rayon;
    printf("The circumference of the circle is:%.2f ",circonference);
    return 0;
}
