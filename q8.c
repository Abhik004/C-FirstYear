//Program to perform all arithmetic function
#include<stdio.h>
void main(){
    int a,b,add,sub,mul,mod,div;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("Addition: ");
    printf("%d",add);
    printf("\nSubtraction: ");
    printf("%d",sub);
    printf("\nMultiplication: ");
    printf("%d",mul);
    printf("\nDivision: ");
    printf("%d",div);
    printf("\nModulus: ");
    printf("%d",mod);

}