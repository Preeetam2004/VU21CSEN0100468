#include <stdio.h>

int prime(int x)
{
    int i,count=0;
    for(i=1;i<=x;++i){
    if(x%i==0)
    count++;
    }
    if(count==2)
    return x;
    
}
int perfect(int x)
{
    int i,sum=0;
    for(i=1;i<x;++i){
    if(x%i==0){
    sum=sum+i;
    }
    }
    if(sum==x)
    return x;
}
int armstrong(int x)
{
    int r,sum=0,a;
    a=x;
    while(a!=0){
    r=a%10;
    sum=sum+r*r*r;
    a=a/10;
    }
    if(x==sum)
    return x;
}
int main(){
    
    int n,k,y,p;
    printf("enter number");
    scanf("%d",&n);
    k=perfect(n);
    y=prime(n);
    p=armstrong(n);
    if(n==k)
    printf("number is perfect");
    else if(n==y)
    printf("number is prime");
    else if(n==p)
    printf("number is armstrong");
}
