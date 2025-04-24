#include<stdio.h>
int main()
{
    int tmarks;
    printf("Enter the total marks secured by the student:");
    scanf("%d",&tmarks);
    if (tmarks>=90 && tmarks<=100)
    {
        printf("He has got O grade");
    }
    else if (tmarks>80 && tmarks<89)
    {
        printf("He has got E grade");
    }
    else if (tmarks>70 && tmarks<79)
    {
        printf("He has got A grade");
    }
    else if (tmarks>60 && tmarks<69)
    {
        printf("He has got B grade");
    }
    else if (tmarks>50 && tmarks<59)
    {
        printf("He has got C grade");
    }
    else
    {
        printf("He has failed");
    }
    return 0;
}
