//q9)Find the sum of numbers entered using do...while loop
#include<stdio.h>
void main()
{
    int n,sum=0;
    while(n!=0)
    {   
       printf("Enter The Number (0 to Stop) \n");
       scanf("%d",&n);
       sum+=n;
    }
    printf("Sum of the Numbers \n%d",sum);
}