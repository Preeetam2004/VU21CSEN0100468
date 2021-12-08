#include <stdio.h>

int main(){
    
    int i,r,sum=0,n;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<n;++i){
    
    r=n%i;
    if(r==0){
    sum=sum+i;
    }
    }
    if(sum==n)
    printf("number is perfect");
    else
    printf("number is not perfect");
    
    return 0;

    }
    
   
