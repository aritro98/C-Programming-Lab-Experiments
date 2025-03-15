#include<stdio.h>
int main()
{
    int a,b,c,s,area;
    printf("Enter the three sides of the triangle:");
    scanf("%d,%d,%d",&a,&b,&c);
    s=a+b+c/3;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle is:%d",area);
    return 0;
}
