//Q5)Calculate SI
#include<stdio.h>
void main(){
    float p,t,r,result;
    printf("Enter the principal: ");
    scanf("%f",&p);
    printf("Enter the time: ");
    scanf("%f",&t);
    printf("Enter the rate of interest: ");
    scanf("%f",&r);
    result = (p*t*r)/100;
    printf("The SI is: ");
    printf("%f",result);
}