#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    ++n,++n,n++,n++,--n,n--;
    printf("Result is:%d",n);
    return 0;
}
