#include<stdio.h>
int main()
{
   int n,i,fact,rem;
   printf("Enter a number:");
   scanf("%d",&n);
   int sum=0;
   int t=n;
   while (n)
   {
      i=1,fact=1;
      rem=n%10;
      while (i<=rem)
      {
        fact=fact*i;
        i++;
      }
      sum=sum+fact;
      n=n/10;
   }
   if(sum==t)
   {
    printf("%d is a strong number",t);
   }
   else
   {
    printf("%d is not a strong number",t);
   }
   return 0;
}
