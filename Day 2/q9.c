//Q9)R1 & R2 in parallel and R3 in series. Input the values and find equivalent Resistance
#include<stdio.h>
void main(){
    float r1,r2,r3;
    printf("Enter R1: \n");
    scanf("%f",&r1);
    printf("Enter R2: \n");
    scanf("%f",&r2);
    printf("Enter R3: \n");
    scanf("%f",&r3);
    float rp=(r1*r2)/(r1+r2);
    float r=rp+r3;
    printf("The equivalent resistance is: %f",r);
}