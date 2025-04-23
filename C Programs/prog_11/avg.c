#include<stdio.h>
int main()
{
    int n=5;
    int sum=0,avg,i;
    int *p=(int*)malloc(n*sizeof(int));
    for (i=0;i<n;i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&p[i]);
        sum=sum+p[i];
    }
    avg=sum/n;
    printf("Average of 5 numbers is:%d",avg);
    free(p);
    return 0;
}
