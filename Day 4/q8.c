//q8)Count the digits in number using do while loop
#include<stdio.h>
void main(){
    int n,count=0,rem;
    printf("Enter the number: ");
    scanf("%d",&n);
    do{
        n/=10;
        count++;
    }while(n>0);
    printf("Number of digits = %d\n", count);
}