#include<stdio.h>
int main()
{
 int r,c,k,m,i;
 printf("Enter the number of rows:");
 scanf("%d",&m);
 for(r=1;r<=m-1;r++)
    {
        i=0;
        for(c=1;c<=m-r;c++)
        {
            printf(" ");
        }
        for(k=1;k<=r;k++)
        {
            printf("%c ",97+i);
            i++;
        }
        printf("\n");
    }
    for(r=0;r<=m-1;r++)
    {
        i=0;
        for(k=1;k<=r;k++)
        {
            printf(" ");
        }
        for(c=1;c<=m-r;c++)
        {
            printf("%c ",97+i);
            i++;
        }
        printf("\n");
    }
    return 0;
}
