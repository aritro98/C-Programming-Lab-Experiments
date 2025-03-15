#include<stdio.h>
int main()
{
   int i,j,c;
   char str[25],temp[25];
   printf("Enter the three strings:\n");
   for(i=0;i<3;i++)
    {
        gets(str[i]);
    }
   for(i=0;i<3;i++)
   {
    for(j=i+1;j<3;j++)
    {
        if(str[i]>str[j])
        {
            temp[i]=str[i];
            str[i]=str[j];
            str[j]=temp[i];
        }
    }
   }
   printf("Order of strings:");
   for(i=0;i<3;i++)
    {
        printf(str[i]);
    }
   return 0;
}
