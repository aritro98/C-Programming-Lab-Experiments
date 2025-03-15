#include <stdio.h>
int main()
{
    char ch[100];
  	int i,tw;
  	tw=1;
  	i=0;
    printf("Enter a string:");
  	gets(ch);
  	while(ch[i]!='\0')
	{
        if(ch[i]==' ' || ch[i]=='\n' || ch[i]=='\t')
		{
			tw++;	
		} 
		i++;
	}	
	printf("The number of words in the string is:%d",tw);
  	return 0;
}
