#include <stdio.h>
int main()
{
    char ch[100];
  	int i,a,n;
  	i=a=n=0;
  	printf("Enter a string:");
  	gets(ch);
  	while (ch[i]!='\0')
  	{
        if((ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z'))
  		{
  			a++;
 		}
  		else
    	{
            n++;
        }
    	i++;
	}
    printf("Number of alphabets in the string is:%d\n",a);  
	printf("Number of non-alphabets in the string is:%d",n);
  	return 0;
}
