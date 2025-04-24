#include<stdio.h>
int main()
{
    int a,b,c,sum,diff;
    printf("Enter two numbers:");
    scanf("%d,%d",&a,&b);
    c=(a>b)?a:b;
    if (c==a)
    {
        sum=a+b;
        printf("Sum is:%d",sum);
    }
    else
    {
        diff=a-b;
        printf("Difference is:%d",diff);
    }
    return 0;
}
