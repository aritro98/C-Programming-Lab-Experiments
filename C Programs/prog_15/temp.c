#include<stdio.h>
int main()
{
    int c,f;
    printf("Enter the temperature in celcius:");
    scanf("%d",&c);
    f=1.8*c+32;
    printf("The temperature in fahrenheit is:%d",f);
    return 0;
}
