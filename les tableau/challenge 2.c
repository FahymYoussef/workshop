#include <stdio.h>

int main()
{
    int tableau[10];
    int i;

    printf("Veuillez entrer 10 nombres entiers :\n");
    for (i = 0; i < 10; i++)
    {
        printf("Nombre %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    int min = tableau[0];
    int max = tableau[0];

    for (i = 0; i < 10; i++)
    {
        if (tableau[i] < min)
        {
            min = tableau[i];
        }
        if (tableau[i] > max)
        {
            max = tableau[i];
        }
    }

    printf("Tableau : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d", tableau[i]);

    }

    printf("\nLe nombre le plus petit est : %d\n", min);
    printf("Le nombre le plus grand est : %d\n", max);

    return 0;
}
