#include<stdio.h>
int main()
{
    int i,n,r;
    printf("Enter no.of terms:");
    scanf("%d",&n);
    i=1;
    r=1;
    while (i<=n)
    {
        r=r*i;
        i++;
    }
    printf("Result is:%d",r);
    return 0;
}
