#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d,%d",&a,&b);
    int c,sum,diff,prod,div;
    printf("Enter your choice:\n1. ADD\n2. SUB\n3. MUL\n4. DIV\n");
    scanf("%d",&c);
    if (c==1)
    {
        sum=a+b;
        printf("The sum is:%d",sum);
    }
    else if (c==2)
    {
        diff=a-b;
        printf("The difference is:%d",diff);
    }
    else if (c==3)
    {
        prod=a*b;
        printf("The product is:%d",prod);
    }
    else
    {
        div=a/b;
        printf("The quotient is:%d",div);
    }
    return 0;
}
