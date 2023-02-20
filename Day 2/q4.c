
//Q4)Write a C program to find P(2)+P(3). Let p(x) is a polynomial P(x)=2x^2-5x+1.
#include<stdio.h>
int main() {
    int x,y,result;
    printf("Enter value of x:");
    scanf("%d",&x);
    printf("Enter Value of y :");
    scanf("%d",&y);
    result=((2*x*x)-(5*x)+1)+((2*y*y)-(5*y)+1);
    printf("The result is %d", result);
}