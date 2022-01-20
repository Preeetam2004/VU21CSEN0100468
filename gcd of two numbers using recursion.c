#include <stdio.h>

int gcd(int x,int y)
{
    if(y!=0)
    return gcd(y,x%y);
    else 
    return x;
   
}

int main()
{
    int a,b,c;
    printf("enter greater number");
    scanf("%d",&a);
    printf("enter smaller number");
    scanf("%d",&b);
    c=gcd(a,b);
    printf("%d",c);
}
