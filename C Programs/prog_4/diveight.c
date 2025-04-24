#include<stdio.h>  
int main()  
{
    int i;  
    printf("The even numbers are:\n");  
    for(i=1;i<=100;i++)
    {
        if (i%2==0 && i%8==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
  