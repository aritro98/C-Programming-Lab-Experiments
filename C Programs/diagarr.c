#include<stdio.h>
int main()
{ 
    int arr[10][10];
    int i,j,m,n,a=0,sum=0;
    printf("Enter the order of the matrix:");
    scanf("%d,%d",&m,&n);
    if (m==n) 
    {
        printf("Enter the co-efficients of the matrix:\n");
        for (i=0;i<m;++i)
        {
            for (j=0;j<n;++j)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        printf("The given matrix is:\n");
        for (i=0;i<m;++i) 
        {
            for (j=0;j<n;++j)
            {
                printf(" %d",arr[i][j]);
            }
            printf("\n");
        }
        for (i=0;i<m;++i)
        {
            sum=sum+arr[i][i];
            a=a+arr[i][m-i-1];
        }
        printf("The sum of the main diagonal elements is:%d\n",sum);
        printf("The sum of the opposite diagonal elements is:%d\n",a);
    }
    else
    {
        printf("The given order is not square matrix\n");
    }
    return 0;
}
