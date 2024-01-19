#include<stdio.h>
int main()
{
    int yr;
    printf("\n Enter a year:");
    scanf("%d",&yr);
    if(yr%100==0)
    {
    if(yr%400==0)
    printf("\n The year %d is leap year",yr);
    else
    printf("\n The year %d is not a leap year",yr);
    }
    else if(yr%4==0)
    printf("\n The year %d is a leap year",yr);
    else
    printf("\n The year %d is not a leap year",yr);
    return 0;
}