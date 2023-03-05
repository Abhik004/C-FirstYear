//q9)Find the sum of numbers entered using do...while loop
#include<stdio.h>
void main()
{
    int n,sum=0;
    do
    {   
       printf("Enter The Number (0 to Stop) \n");
       scanf("%d",&n);
       sum+=n;
    } 
    while (n!=0);
    printf("Sum of the Numbers \n%d",sum);
}