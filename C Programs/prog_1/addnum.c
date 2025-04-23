#include <stdio.h>
int main() 
{
    int n,i,sum;
    scanf("%d",&n);
    i = 1;
    sum=0;
    while (i<=n)
    {
        sum+=i;
        i++;
    }
    printf("Sum of first 15 natural numbers is:%d",sum);
    return 0;
}
