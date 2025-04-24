#include <stdio.h>
int main() 
{
    int *p=(int*)calloc(6,sizeof(int));
    for (int i=1;i<6;i++) 
    {
        p[i]=2*i;
    }
    printf("The first 5 even numbers are:\n");
    for (int i=1;i<6;i++) 
    {
        printf("%d\n",p[i]);
    }
    free(p);
    return 0;
}
