#include<stdio.h>
int main()
{
    int s,e,sum,i;
    printf("Enter starting range:");
    scanf("%d",&s);
    printf("Enter ending range:");
    scanf("%d",&e);
    while (i<e)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("Sum is:%d",sum);
    return 0;
}
