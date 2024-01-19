#include<stdio.h>
int main()
{
    int d,yr,m,w;
    printf("\n Enter a year:");
    scanf("%d",&d);
    yr=d/365;
    d=d%365;
    m=d/30;
    d=d%30;
    w=d/7;
    d=d%7;
    printf("\n years=%d",yr);
    printf("\n months=%d",m);
    printf("\n weeks=%d",w);    
    printf("\n days=%d",d);
    return 0;
}