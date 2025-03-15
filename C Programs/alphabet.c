#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("It is an alphabet\n");
        if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            printf("It is a vowel");
        }
        else
        {
            printf("It is a consonant");
        }    
    }
    else
    {
        printf("It is not an alphabet");
    }
    return 0;
}
