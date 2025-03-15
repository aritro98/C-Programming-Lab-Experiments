#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    float avg,percentage;
    printf("Enter the marks of 5 subjects:");
    scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    avg=sum/5;
    percentage=sum*100/500;
    printf("The average mark is:%f\n",avg);
    printf("The percentage is:%f",percentage);
    return 0;
}
