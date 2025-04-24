#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    switch(a%2==0)
    {
        case 0:
        printf("%d is an odd number",a);
        break;
        case 1:
        printf("%d is an even number",a);
    }
    return 0;
}
