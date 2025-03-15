#include<stdio.h>
int main()
{
    int a,b,*x,*y,sum1,diff1,prod1;
    float c,d,*p,*q,sum2,diff2,prod2;
    printf("Enter two integer numbers:");
    scanf("%d,%d",&a,&b);
    printf("Enter two floating point numbers:");
    scanf("%f,%f",&c,&d);
    x=&a;
    y=&b;
    p=&c;
    q=&d;
    sum1=*x+*y;
    diff1=*x-*y;
    prod1=*x**y;
    sum2=*p+*q;
    diff2=*p-*q;
    prod2=*p**q;
    printf("Sum is:%d,%f\n",sum1,sum2);
    printf("Difference is:%d,%f\n",diff1,diff2);
    printf("Product is:%d,%f\n",prod1,prod2);
    return 0;
}
