#include <stdio.h>

int lcm(int x,int y)
{
   static int c=1;
   if(c%x==0 && c%y==0)
   return c;
   else 
   c++;
   lcm(x,y);
   return c;
}

int main()
{
    int a,b,c;
    printf("enter greater numbers");
    scanf("%d%d",&a,&b);
    c=lcm(a,b);
    printf("%d",c);
}
