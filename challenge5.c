#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;

    printf("Enter the x-coordinate of point M: ");
    scanf("%f", &x1);
    printf("Enter the y-coordinate of point M: ");
    scanf("%f", &y1);

    printf("Enter the x-coordinate of point N: ");
    scanf("%f", &x2);
    printf("Enter the y-coordinate of point N: ");
    scanf("%f", &y2);

    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("The distance between M and N is: %.2f\n", distance);

    return 0;
}
