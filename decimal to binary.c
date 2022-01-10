#include <stdio.h>

int main() {
    
    int n,b=0,r,p=1;
    printf("enter number");
    scanf("%d",&n);
    
    while(n>0){
    r=n%2;
    n=n/2;
    b=b+r*p;
    p=p*10;
    }
    printf("%d",b);
   
    return 0;
}
