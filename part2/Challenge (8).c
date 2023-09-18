#include<stdio.h>
main()
{
    int average;
    printf("Enter the student's average grade:");
    scanf("%d",&average);

    if( average<10)
    {
        printf("failde");
    }
    else if(average >=10 && average <12 )
    {
        printf("passable");
    }
    else if(average >=12 && average <14)
    {
        printf("fairly well");
    }
    else if(average >=14 && average<16)
    {
        printf("good");
    }
else if(average>=16)
{
        printf("very good");
    }


    return 0;
}
