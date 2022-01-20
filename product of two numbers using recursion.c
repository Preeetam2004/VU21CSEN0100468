#include <stdio.h>

int product(int x,int y)
{
    if(x<y)
    return product(y,x);
    else if(y!=0)
    return x+product(x,y-1);
    else 
    return 0;
}

int main()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    c=product(a,b);
    printf("%d",c);
}
