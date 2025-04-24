//Section-A
//Q2) Take 3 numbers as argument in a function, print their sum and return their average
#include<stdio.h>
int SumAvg(int,int,int);
int main()
{
    int r;
    r=SumAvg(5,6,7);
    return r;
}
int SumAvg(int x,int y,int z)
{
    int sum,avg;
    sum=x+y+z;
    avg=sum/3;
    printf("Sum is:%d\n",sum);
    printf("Average is:%d",avg);
    return 0;
}
