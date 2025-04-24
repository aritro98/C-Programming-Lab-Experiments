#include <stdio.h>
int main()
{
    int arr[100];
    int s,i,ts,f;
    printf("Enter size of array:");
    scanf("%d",&s);
    printf("Enter elements in array:\n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search:");
    scanf("%d",&ts);
    f=0; 
    for(i=0;i<s;i++)
    {
        if(arr[i]==ts)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("%d is found at position %d",ts,i+1);
    }
    else
    {
        printf("%d is not found in the array",ts);
    }
    return 0;
}
