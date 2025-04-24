#include<stdio.h>
int main()
{
    int t,paisa,rup;
    printf("Enter the ammount in paisa:");
    scanf("%d",&paisa);
    rup=paisa/100;
    t=paisa%100;
    printf("%dpaisa=%drupee and %dpaisa",paisa,rup,t);
    return 0;
}
