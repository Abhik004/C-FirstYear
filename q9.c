//Convert metre to kilometre
#include<stdio.h>
void main(){
    int k;
    printf("Enter length in m : ");
    scanf("%d",&k);
    int result=k/1000;
    int mod=k%1000;
    printf("The length in km is : %d km %d m",result, mod);
}