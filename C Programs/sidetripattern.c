#include <stdio.h>    
int main()  
{  
    int num,i,j,m=0;  
    printf("Enter the number of columns:");  
    scanf("%d",&num);  
    for (i=1;i<=num;i++)  
    {  
        for (j=1;j<=i;j++)  
        {  
            printf("%d ",m+j-1);
        }  
        printf("\n");
    }  
    for (i=num-1;i>=1;i--)  
    {  
        for (j=1;j<=i;j++)  
        {  
            printf("%d ",m+j-1);
        }  
        printf("\n");  
    }  
    return 0;
}
