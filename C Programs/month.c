#include<stdio.h>
int main()
{
    int m;
    printf("Enter the month number:");
    scanf("%d",&m);
    switch(m)
    {
    case 12:
        printf("December");
        break;
    case 11:
        printf("November");
        break;
    case 10:
        printf("October");
        break;
    case 9:
        printf("September");
        break;
    case 8:
        printf("August");
        break;
    case 7:
        printf("July");
        break;
    case 6:
        printf("June");
        break;
    case 5:
        printf("May");
        break;
    case 4:
        printf("April");
        break;
    case 3:
        printf("March");
        break;
    case 2:
        printf("February");
        break;
    case 1:
        printf("January");
        break;
    default:
    printf("Invalid");    
    }
    return 0;
}
