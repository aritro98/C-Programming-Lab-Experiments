#include<stdio.h>
int main()
{
    int ang1,ang2,ang3,sum;
    printf("Enter 3 angles of a triangle:");
    scanf("%d,%d,%d",&ang1,&ang2,&ang3);
    sum=ang1+ang2+ang3;
    if (sum==180)
    {
        if (ang1==60 && ang2==60 && ang3==60)
        {
            printf("Equilateral");
        }
        else if (ang1==90 || ang2==90 || ang3==90)
        {
            printf("Right angled");
        }
        else if (ang1>90 || ang2>90 || ang3>90)
        {
            printf("Obtuse angled");
        }
    }
    else
    {
        printf("Not a triangle");
    }
    return 0;
}
