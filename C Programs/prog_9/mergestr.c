#include<stdio.h>
int main() 
{
  char t,s1[50],s2[50];
  printf("Enter the strings:\n");
  gets(s1);
  gets(s2);
  int l,j,i,k;
  l=0;
  while (s1[l]!='\0') 
  {
    ++l;
  }
  for (j=0;s2[j]!='\0';++j,++l) 
  {
    s1[l]=s2[j];
  }
  s1[l]='\0';
  int sl=strlen(s1);
  for (i=0;i<sl-1;i++) 
  {
   	for (k=i+1;k<sl;k++) 
    {
        if (s1[i]>s1[k]) 
        {
       		t=s1[i];
       		s1[i]=s1[k];
       		s1[k]=t;
        }
    }
  }
  printf(s1);
  return 0;
}
