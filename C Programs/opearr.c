#include<stdio.h>
int main()
{
  int i,j,r,c,a[5][5],b[5][5];
  int sum[5][5],diff[5][5],prod[5][5];
  printf("Please Enter Number of rows and columns:");
  scanf("%d,%d",&i,&j);
  printf("Please Enter the First Array Elements:\n");
  for(r=0;r<i;r++)
  {
    for(c=0;c<j;c++)
    {
      scanf("%d",&a[r][c]);
    }
  }
  printf("Please Enter the Second Array Elements:\n");
  for(r=0;r<i;r++)
  {
    for(c=0;c<j;c++)
    {
      scanf("%d",&b[r][c]);
    }
  }
  for(r=0;r<i;r++)
  {
    for(c=0;c<j;c++)
    {
      sum[r][c]=a[r][c]+b[r][c];  
      diff[r][c]=a[r][c]-b[r][c];  
      prod[r][c]=a[r][c]*b[r][c];     
    }
  }
  printf("Add\t Sub\t Multi\n");
  for(r=0;r<i;r++)
  {
    for(c=0;c<j;c++)
    {
      printf("%d\t",sum[r][c]);
      printf("%d\t",diff[r][c]);
      printf("%d\t",prod[r][c]);
    }
  }
  return 0;
}
