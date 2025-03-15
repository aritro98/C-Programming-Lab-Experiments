#include<stdio.h>
int main()
{
    char c1,c2,c3;
    printf("Enter three characters:");
    scanf("%c,%c,%c",&c1,&c2,&c3);
    if (c1<c2 && c1<c3 && c2<c3)
    {
        printf("%c,%c,%c",c1,c2,c3);
    }
    else if (c2<c1 && c2<c3 && c1<c3)
    {
        printf("%c,%c,%c",c2,c1,c3);
    }
    else if (c3<c2 && c3<c1 && c2<c1)
    {
        printf("%c,%c,%c",c3,c1,c2);
    }
    else if (c1<c2 && c1<c3 && c3<c2)
    {
        printf("%c,%c,%c",c1,c3,c2);
    }
    else
    {
        printf("%c,%c,%c",c1,c2,c3);
    }
    return 0;
}
