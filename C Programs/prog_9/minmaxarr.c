#include<stdio.h>
int main()
{
    int x,y,i,j,min,max;
    printf("Enter the no.of rows and columns in the array:");
    scanf("%d,%d",&x,&y);
    int a[x][y];
    printf("Enter the elements in the array:");
    for (i=0;i<x;i++)
    {
        for (j=0;j<y;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    min=a[0][0];
    for (i=0;i<x;i++)
    {
        for (j=0;j<y;j++)
        {
            if (a[i][j]>max)
            {
                printf("Maximum Value is:%d\n",a[i][j]);
            }
            if (a[i][j]<min)
            {
                printf("Minimum Value is:%d\n",a[i][j]);
            }
        }
    }
    return 0;
}
