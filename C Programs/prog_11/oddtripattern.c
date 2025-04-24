#include <stdio.h>
int main()
{
   int i,j,r;
   printf("Input number of rows:");
   scanf("%d",&r);
   for(i=1;i<=r;i++)
   {
    for(j=1;j<=i+2;j++)
    {
        printf("%d",j);
    }
	printf("\n");
   }
   return 0;
}
