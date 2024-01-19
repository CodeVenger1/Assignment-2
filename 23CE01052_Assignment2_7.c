#include<stdio.h>
#include<math.h>
int main()
{
    float p,tip,tax,fp;
    printf("\n Enter base price, tip percent and tax percent");
    scanf("%f %f %f",&p,&tip,&tax);
    fp=p+p*(tip/100)+p*(tax/100);
    printf("\n The meal's net cost is: %f",round(fp));
    return 0;
}
