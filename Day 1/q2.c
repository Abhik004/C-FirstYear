//Q2)Write a proggram to accept 3 subject and find average
#include<stdio.h>
void main(){
    float a;
    float b;
    float c;
    float result;
    printf("Enter marks of first subject :");
    scanf("%f",&a);
    printf("Enter marks of second subject: ");
    scanf("%f",&b);
    printf("Enter marks of third subject :");
    scanf("%f",&c);
    result = (a + b + c)/3;
    printf("The average is: ");
    printf("%f",result);

}