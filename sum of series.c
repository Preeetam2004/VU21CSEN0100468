#include <stdio.h>

int main(){
    
    float sum,t,d,x;
    int i,n;
    
    printf("enter value of x");
    scanf("%f",&x);
    printf("enter number of terms");
    scanf("%d",&n);
    t=1;sum=1;
    
    for(i=1;i<n;i++){
    d=(2*i)*(2*i-1);
    t=-t*x*x/d;
    sum=sum+t;
    }
    printf("sum of series is %f",sum);
}
