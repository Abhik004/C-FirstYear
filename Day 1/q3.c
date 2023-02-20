//Q3)Calculate area of circle taking radius input
#include<stdio.h>
void main(){
    float r;
    float result;
    printf("Enter the radius: ");
    scanf("%f",&r);
    result=3.14*r*r;
    printf("The area of the circle is: ");
    printf("%f",result);
}