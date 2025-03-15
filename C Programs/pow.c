#include<stdio.h>
int main()
{
    int x,n,r;
    printf("Enter the number and its power:");
    scanf("%d,%d",&x,&n);
    r=pow(x,n);
    printf("The result is:%d",r);
    return 0;
}
