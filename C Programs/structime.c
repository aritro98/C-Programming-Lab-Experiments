#include<stdio.h>
struct time
{
    int hr;
    int min;
    int sec;
};
int main()
{
    struct time t;
    printf("Enter the time in 24 hour format:");
    scanf("%d:%d:%d",&t.hr,&t.min,&t.sec);
    if (t.hr<0 || t.hr>24)
    {
        printf("Invalid time");
    }
    else
    {
        if (t.hr<12)
        {
            printf("AM");
        }
        else
        {
            printf("PM");
        }
    }
    return 0;
}
