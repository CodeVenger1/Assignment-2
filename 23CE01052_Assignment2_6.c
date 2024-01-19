#include<stdio.h>
int main()
{
    int a;
    printf("\n Enter a number:");
    scanf("%d",&a);
    (a%2!=0&&a>100&&a<200)?
    printf("\n True"):
    printf("\n False");
}