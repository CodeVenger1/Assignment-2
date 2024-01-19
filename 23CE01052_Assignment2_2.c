#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,max;
    printf("\n Enter the numbers:");
    scanf("%d %d %d",&a,&b,&c);
    max=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("\n The largest number is:%d",max);
    return 0;
}