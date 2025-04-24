//Section-B
//Q1) Use pointer and find the smallest between 2 numbers
#include<stdio.h>
int main()
{
    int *p,*q,x,y;
    printf("Enter the 1st number:");
    scanf("%d",&x);
    printf("Enter the 2nd number:");
    scanf("%d",&y);
    *p=&x;
    *q=&y;
    if (*p<*q)
    {
        printf("%d is smallest",x);
    }
    else
    {
        printf("%d is smallest",y);
    }
    return 0;
}
