#include<stdio.h>
int main()
{
    int i,j,t;
    char ch[50];
    printf("Enter a string:");
    gets(ch);
    int l=strlen(ch);
    for (i=0;i<l-1;i++) 
    {
        for (j=i+1;j<l;j++) 
        {
            if (ch[i]>ch[j]) 
            {
                t=ch[i];
                ch[i]=ch[j];
                ch[j]=t;
            }
        }
    }
    printf(ch);
    return 0;
}
