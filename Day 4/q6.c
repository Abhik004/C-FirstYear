//q6)Convert binary to decimal number
#include<stdio.h>
void main(){
    int n,nsave,rem,d;
    int j=1;
    int dec=0;
    printf("Enter the number in binary: ");
    scanf("%d",&n);
    nsave=n;
    while(n>0){
        rem=n%10;
        d=rem*j;
        dec+=d;
        j*=2;
        n/=10;
    }
    printf("Binary number = %d, Decimal number = %d\n", nsave, dec);
}