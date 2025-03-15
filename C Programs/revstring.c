#include<stdio.h>
int main()
{
    char ch[50];
    printf("Enter a string:");
    gets(ch);
    int l=strlen(ch);
    int i;
    for (i=l-1;i>=0;i--) 
    {
        if (ch[i]==' ') 
        {
            ch[i]='\0';
            printf("%s ",&(ch[i])+1);
        }
    }
    printf("%s",ch);
    return 0;
}
