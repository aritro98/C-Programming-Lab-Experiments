#include <stdio.h>
int main()
{
    int u,amt,tamt,src;
    printf("Enter the number of units consumed:");
    scanf("%d",&u);
    if (u<=50)
    {
        amt=u*0.5;
    }
    else if (u<=150)
    {
        amt=25+((u-50)*0.75);
    }
    else if (u<=250)
    {
        amt=100+((u-150)*1.2);
    }
    else
    {
        amt=220+((u-250)*1.50);
    }
    src=amt*0.2;
    tamt=amt+src;
    printf("Electricity Bill is:Rs%d",tamt);
    return 0;
}
