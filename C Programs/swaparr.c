#include<stdio.h>
int main() 
{
	int a[10],b[10],c[10],i;
	printf("Enter First array:\n");
	for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
	printf("Enter Second array:\n");
	for (i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }
	printf("\nArrays before swapping\n");
	printf("First array:\n");
	for (i=0;i<10;i++) 
    {
		printf("%d ",a[i]);
	}
	printf("\nSecond array:\n");
	for (i=0;i<10;i++) 
    {
		printf("%d ",b[i]);
	}
	for (i=0;i<10;i++) 
    {
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];
	}
	printf("\nArrays after swapping\n");
	printf("First array:\n");
	for (i=0;i<10;i++) 
    {
		printf("%d ",a[i]);
	}
	printf("\nSecond array:\n");
	for (i=0;i<10;i++) 
    {
		printf("%d ",b[i]);
	}
	return 0;
}
