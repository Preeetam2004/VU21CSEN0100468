#include<stdio.h>

int fact(int a)
{
    int b;
    if(a==0){
    b=1;
    }
    else{ 
    b=a*fact(a-1);
    }
    return b;
    
}

int main(){
    
    int n,r;
    
    printf("enter n");
    scanf("%d",&n);
    r=fact(n);
    printf("%d",r);
}
