#include <stdio.h>


int fib(int x)
{
    if(x==0)
    return x;
    else if(x==1)
    return x;
    else
    return fib(x-1)+fib(x-2);
}
int main()
{
    int a,b,c;
    printf("enter number");
    scanf("%d",&a);
   for(b=0;b<=a;++b){
    printf("%d",fib(b));
   }
}
