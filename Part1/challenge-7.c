#include<stdio.h>
main(){
int num , reverse;
printf("Saisissez un entier à trois chiffres :" );
scanf("%d",&num);
reverse = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);

printf("Le nombre inverse est:%d \n",reverse);
return 0;
}
