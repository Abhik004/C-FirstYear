//Find volume of sphere taking radius as input
#include<stdio.h>
void main(){
    float l;
    float result;
    printf("Enter the radius: ");
    scanf("%f",&l);
    result=(4*3.14*l*l*l)/3;
    printf("The volume of square is: ");
    printf("%f",result);
}