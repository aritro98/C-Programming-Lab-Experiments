#include<stdio.h>
int main()
{
    int h1,m1,s1,h2,m2,s2,h3,m3,s3;
    printf("Enter the first time in hour,minute,second:");
    scanf("%d,%d,%d",&h1,&m1,&s1);
    printf("Enter the second time in hour,minute,second:");
    scanf("%d,%d,%d",&h2,&m2,&s2);
    h3=h1+h2;
    m3=m1+m2;
    s3=s1+s2;
    printf("The added time is:%d:%d:%d",h3,m3,s3);
    return 0;
}
