#include<stdio.h>
int main()
{
    char ch[100];
    int l;
    printf("Enter a string:");
    gets(ch);
    l=0;
    while (ch[l]!='\0')
    {
        l++;
    }
    printf("Length of the string is:%d",l);
    return 0;
}
