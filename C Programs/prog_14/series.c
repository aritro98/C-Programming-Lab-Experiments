#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    printf("The series is:\n");
    i=0;
    while (i<=n)
    {
        printf("%d\n",i);
        i=i+3;
    }
    return 0;
}
