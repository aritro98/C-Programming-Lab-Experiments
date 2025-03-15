#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if (num>=0)
    {
        printf("It is positive");
    }
    else
    {
        printf("It is negative");
    }
    return 0;
}
