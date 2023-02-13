//Find volume of square taking length as input
#include<stdio.h>
void main(){
    float l;
    float result;
    printf("Enter the length: ");
    scanf("%f",&l);
    result=l*l*l;
    printf("The volume of square is: ");
    printf("%f",result);
}