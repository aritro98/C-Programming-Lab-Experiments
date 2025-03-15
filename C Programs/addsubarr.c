#include<stdio.h>
int main()
{
    int n,m,c,d,f[10][10],s[10][10],sum[10][10],diff[10][10];
    printf("Enter the number of rows and columns of the first matrix:");
    scanf("%d,%d",&m,&n);
    printf("Enter the %d elements of the first matrix:\n",m*n);
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            scanf("%d",&f[c][d]);
        }
    }
    printf("\nEnter the %d elements of the second matrix:\n",m*n);
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            scanf("%d",&s[c][d]);
        }
    }
    printf("\nThe first matrix is:\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            printf("%d ",f[c][d]);
        }
    printf("\n");
    }
    printf("\nThe second matrix is:\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            printf("%d ",s[c][d]);
        }
    printf("\n");
    }
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            sum[c][d]=f[c][d]+s[c][d];
        }
    }
    printf("\nThe sum of the two entered matrices is:\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            printf("%d ",sum[c][d]);
        }
        printf("\n");
    }
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            diff[c][d]=f[c][d]-s[c][d];
        }
    }
    printf("\nThe difference of the two entered matrices is:\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            printf("%d ",diff[c][d]);
        }
        printf("\n");
    }
    return 0;
}
