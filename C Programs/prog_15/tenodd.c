#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&i);
    printf("The first 10 odd numbers are:\n");
    while (i<=10)
    {
        n=2*i-1;
        printf("%d\n",n);
        i++;
    }
    return 0;
}
