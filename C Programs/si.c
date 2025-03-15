#include<stdio.h>
int main()
{
    int p,r,t,si;
    printf("Enter the principle,rate and time:");
    scanf("%d,%d,%d",&p,&r,&t);
    si=p*r*t/100;
    printf("The simple interest is:%d",si);
    return 0;
}
