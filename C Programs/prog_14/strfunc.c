#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10],s3[10];
    int l;
    printf("Enter the strings:\n");
    gets(s1);
    gets(s2);
    l=strlen(s1);
    printf("Length of string:%d\n",l);
    if(strcmp(s1,s2)==0)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not equal\n");
    }
    strcpy(s3,s2);
    strcat(s1,s2);
    printf("%s\n",s3);
    printf("%s",s1);
    return 0;
}
