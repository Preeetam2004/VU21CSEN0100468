#include<stdio.h>
int main()
{
    float P,r,t,SI;
    printf("enter the Principal Amount");
    scanf("%f", &P);
    printf("Enter the Time Period");
    scanf("%f", &t);
    printf("enter the Rate of Interest");
    scanf("%f", &r);
    SI=(P*r*t)/100;
    printf("the simple interest is : %0.2f",SI);
   
}
