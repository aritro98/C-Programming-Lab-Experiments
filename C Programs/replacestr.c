#include<stdio.h>
int main()
{
    int i=0;
    char s[50];
    printf("Enter a string:");
    gets(s);
    while(s[i]!='\0')
    {
        if(s[i]=='a')
        {
            s[i]='i';
        }
        i++;
    }
    printf("%s",s);
    return 0;
}
