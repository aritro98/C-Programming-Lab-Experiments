#include <stdio.h>
int main()
{
    char ch;
    while ("True")
    {
        printf("Enter any character:");
        scanf("%c",&ch);
        if(ch>='0' && ch<='9')
        {
            printf("It is a number\n",ch);
            break;
        }
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            printf("It is an alphabet\n",ch);
        }
        else 
        {
            break;
        }
        continue;
    }
    return 0;
}
