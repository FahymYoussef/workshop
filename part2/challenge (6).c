#include<stdio.h>
main(){
int num;
printf("enter number:");
scanf("\d",&num);

if(num %2==0){
printf("%d your number is odd.\n",num);
}
else{
    printf("%d your number is even. \n",num);
}



return 0;
}
