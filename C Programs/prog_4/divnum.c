#include<stdio.h>
int main() 
{
	int x,y,div;
	while ("True")
	{
		printf("Enter two numbers:");
		scanf("%d,%d",&x,&y);
		if(y!=0)
		{
			div=x/y;
			printf("Quotient is:%d\n",div);
		}
		else
		{
			printf("Division not possible");
			break;
		}
		continue;
	}
    return 0;
}
