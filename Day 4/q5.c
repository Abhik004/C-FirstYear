//q5)Find the factorial of a number
#include<stdio.h>
void main(){
    int n,num;
    long fact=1;
    printf("Enter the number :");
    scanf("%d",&n);
    num=n;
    if(n<0){
        printf("No factorial of negative number.");
    }
    else{
        while(n>1){
            fact*=n;
            n--;
        }
        printf("Factorial of %d = %ld\n", num, fact);
    }
}