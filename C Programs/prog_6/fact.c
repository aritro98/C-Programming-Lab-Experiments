#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter a number:");
    printf("Factorial is:%d",fact(n));
    return 0;
}
int fact(int n)
{
    int i,f=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
