//Q7)Check the number is positive or negative using ternary/conditional operator.
#include<stdio.h>
void main(){
    float a;
    printf("Enter the number :");
    scanf("%f",&a);
    a>0 ? printf("Positive Number") : printf("Negative Number");
}