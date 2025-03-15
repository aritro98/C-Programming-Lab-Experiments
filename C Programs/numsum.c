#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("N:");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        s=s+pow(2,i);
    }
    printf("Sum is:%d",s);
    return 0;
}
