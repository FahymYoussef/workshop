#include <stdio.h>
 int main()
  {
    char Nom[60];
    char Sex [60];
    int  Age;
    int Mobile;

    printf("entrez votre nom:");
    scanf("%s",Nom);
    printf("quel est votre sex?:");
    scanf("%s",Sex);
    printf("Entrez votre age:");
    scanf("%d",&Age);
    printf("Entrez votre numéro:");
    scanf("%d",&Mobile);
    printf("votre nom :%s \n",Nom);
    printf("votre sex :%s \n",Sex);
    printf("votre age :%d \n",Age);
    printf("votre number:%d \n",Mobile);

    return(0);
  }
