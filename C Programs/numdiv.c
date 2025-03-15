#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n%2==0 && n%3==0)
    {
        if (n%6==0)
        {
            printf("It is divisible by 6");
        }
    }
    else
    {
        printf("It is not divisible by 6");
    }
    return 0;
}
