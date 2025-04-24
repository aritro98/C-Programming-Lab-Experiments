#include<stdio.h>
int main()
{
	char c;
	printf("Enter any character: ");
	scanf("%c", &c);
	if(c>='a'&&c<='z')
    {
        c = c-32;
		printf("Uppercase is: %c", c);
	}
	else
	{
	 	printf("It is not lowercase character.");
	}
	return 0;
}
