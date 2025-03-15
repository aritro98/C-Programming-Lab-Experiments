#include<stdio.h>
int main()
{
    char c,ch=1;
    printf("Enter a character:");
    scanf("%c",&c);
    while (ch==1)
    {
        if (c>=97 || c<=122)
        {
            printf("Lowercase Character\n");
        }
        else if (c>=65 || c<=90)
        {
            printf("Uppercase Character\n");
        }
    printf("Input 1 continue 0 stop\n");
    scanf("%d",&c);
    }
    return 0;
}
