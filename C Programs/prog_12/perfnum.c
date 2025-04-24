#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("A perfect number");
    }
    else
    {
        printf("Not a perfect number");
    }
    return 0;
}
