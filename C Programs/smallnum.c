#include<stdio.h>
int main()
{
    int a,b,c,r;
    printf("Enter three numbers:");
    scanf("%d,%d,%d",&a,&b,&c);
    r=(a<b)?(a<c?a:c):(b<c?b:c);
    printf("Smallest Number is:%d",r);
    return 0;
}
