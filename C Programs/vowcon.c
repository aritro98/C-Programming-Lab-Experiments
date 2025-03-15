#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is a consonant\n");
        if (c>=97 && c<=122)
        {
            printf("Lowercase");
        }
        else if (c>=65 && c<=90)
        {
            printf("Uppercase");
        }
    }
    return 0;
}
