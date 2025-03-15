#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,x,y;
    float f,g;
    printf("Enter the values:");
    scanf("%d,%d,%f,%f",&a,&b,&f,&g);
    c=pow(a,b);
    d=sqrt(a);
    e=log(a);
    x=ceil(f);
    y=floor(g);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",x);
    printf("%d",y);
    return 0;
}
