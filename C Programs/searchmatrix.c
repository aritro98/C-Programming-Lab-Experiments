#include<stdio.h>
int main()
{
    int a[4][4]={{0,1,12,3},{4,5,6,7},{8,9,10,11}};;
    int s;
    printf("Enter the number need to be searched:");
    scanf("%d",&s);
    int flag=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][j]==s)
            {
                printf("Number is found at (%d, %d) position",i,j);
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==0)
    {
        printf("Number not found");
    }
    return 0;
}
