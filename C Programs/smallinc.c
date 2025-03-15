#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d,%d",&a,&b);
    c=(a<b)?a:b;
    if (c==a)
    {
        a++;
        printf("%d",a);
    }
    else
    {
        b++;
        printf("%d",b);
    }
    return 0;
}
