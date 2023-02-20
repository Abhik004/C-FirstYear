//Q8)Check the number is even or odd using ternanry/conditional operator
#include<stdio.h>
void main(){
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    a%2==0 ? printf("Even Number") : printf("Odd Number");
}