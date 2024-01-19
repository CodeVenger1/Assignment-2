#include<stdio.h>
int main()
{
    int a;
    printf("\n Enter a number:");
    scanf("%d",&a);
    if(a&1)
    printf("\n The number is odd");
    else 
    printf("\n The number is even");
    return 0;
}