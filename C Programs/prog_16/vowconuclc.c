#include<stdio.h>
int main()
{
    char ch[100];
    int u=0,l=0,v=0,c=0;
	printf("Enter a string:");
	gets(ch);
	int i=0;
	while(ch[i]!='\0')
	{
        if(ch[i]>=65 && ch[i]<=90)
        {
            u++;
        }
		if(ch[i]>=97 && ch[i]<=122)
		{
            l++;
        }
		if(ch[i]=='A'|| ch[i]=='E'|| ch[i]=='I'|| ch[i]=='O'|| ch[i]=='U'|| ch[i]=='a'|| ch[i]=='e'|| ch[i]=='i'|| ch[i]=='o'|| ch[i]=='u')
		{
            v++;
        }
		if(ch[i]!='A' && ch[i]!='E' && ch[i]!='I' && ch[i]!='O' && ch[i]!='U' && ch[i]!='a' && ch[i]!='e' && ch[i]!='i' && ch[i]!='o' && ch[i]!='u')
		{
            c++;
        }
		i++;
	}
	printf("No.of uppercase alphabets:%d\nNo.of lowercase alphabets:%d\nNo.of vowels:%d\nNo.of consonants:%d\n",u,l,v,c);
	return 0;
}
