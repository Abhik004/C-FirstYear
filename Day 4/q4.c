//q4)Print products of digits of any number
#include<stdio.h>
void main(){
    int n,prod=1,rem;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        prod*=rem;
        n/=10;
    }
    printf("Product of the digits: %d\n",prod);
}