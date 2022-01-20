#include <stdio.h>

int factorial(int u)
{
    int i,o=1;
    for(i=1;i<=u;++i){
    o=o*i;
    }
    return o;
}

int main(){
    
    int a,b,c,r,sum=0,fact=1;
    printf("enter range");
    scanf("%d%d",&a,&b);
    
    for(c=a;c<=b;++c){
        int k=c;
        while(k!=0){
    r=k%10;
    fact=factorial(r);
    k=k/10;
   sum=sum+fact;
    }
     if(sum==c){
    printf("%d",c);
     }
     sum=0;
    }
    

    return 0;
}
