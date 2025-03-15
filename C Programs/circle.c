#include<stdio.h>
int main()
{
    int r,area,peri;
    printf("Enter the radius of the circle:");
    scanf("%d",&r);
    area=3.14*r*r;
    peri=2*3.14*r;
    printf("The area of the circle is:%d\n",area);
    printf("The perimeter of the circle is:%d\n",peri);
    return 0;
}
