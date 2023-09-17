#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    float delta,x,y,z;
    printf(" Entrer lec confitions a, b , c de l'equation ax * x + bx + c : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    delta=b*b-4*a*c;
    printf("delta=%f\n",delta);
    if(delta<0)
    {
        printf("il n'y a pas de solution .");
    }
    else if(delta ==0)
    {
        x=-b /2*a;
        printf(" Il ya une seule solution x = %f",x);
    }
    else
    {
        z = (- b - sqrt (delta) )/ 2 * a;
        y = (- b + sqrt (delta) )/ 2 * a;
        printf(" Il ya deux solutions z = %f y = %f",z,y);



    }





    return 0;
}
