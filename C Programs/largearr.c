#include<stdio.h>
int main()
{
    int n=0,i=0,l1=0,l2=0,temp=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array elements are:");
    for (i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    l1=arr[0];
    l2=arr[1];
    if (l1<l2)
    {
        temp=l1;
        l1=l2;
        l2=temp;
    }
    for (int i=2;i<n;i++)
    {
        if (arr[i]>l1)
        {
            l2=l1;
            l1=arr[i];
        }
        else if (arr[i]>l2 && arr[i]!=l1)
        {
            l2=arr[i];
        }
    }
    printf("The first largest number:%d\n",l1);
    printf ("The second largest number:%d\n",l2);
    return 0;
}
