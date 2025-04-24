#include<stdio.h>
int main()
{
    char ch[50];
    int i=0,a,e,j,o,u;
    printf("Enter a string:");
    gets(ch);
    while (ch[i]!='\0')
    {
        if (ch[i]=='A' || ch[i]=='a')
        {
            ++a;
        }
        if (ch[i]=='E' || ch[i]=='e')
        {
            ++e;
        }
        if (ch[i]=='I' || ch[i]=='i')
        {
            ++j;
        }
        if (ch[i]=='O' || ch[i]=='o')
        {
            ++o;
        }
        if (ch[i]=='U' || ch[i]=='u')
        {
            ++u;
        }
        i++;
    }
    printf("a:%d\n",a);
    printf("e:%d\n",e);
    printf("i:%d\n",j);
    printf("o:%d\n",o);
    printf("u:%d",u);
    return 0;
}
