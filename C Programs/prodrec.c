#include<stdio.h>
int prodeve(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Product of first %d even numbers is:%d\n",n,prodeve(n));
    return 0;
}
int prodeve(int n)
{
    if(n%2==0)
    {
        return (n*prodeve(n-2));
    }
    else
    {
        return n;
    }
}
